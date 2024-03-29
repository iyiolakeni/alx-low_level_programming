#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *elf_int);
void print_magic(unsigned char *elf_int);
void print_class(unsigned char *elf_int);
void print_data(unsigned char *elf_int);
void print_version(unsigned char *elf_int);
void print_abi(unsigned char *elf_int);
void print_osabi(unsigned char *elf_int);
void print_type(unsigned int e_type, unsigned char *elf_int);
void print_entry(unsigned long int e_entry, unsigned char *elf_int);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @elf_int: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *elf_int)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_int[i] != 127 &&
		    elf_int[i] != 'E' &&
		    elf_int[i] != 'L' &&
		    elf_int[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @elf_int: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *elf_int)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_int[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @elf_int: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *elf_int)
{
	printf("  Class:                             ");

	switch (elf_int[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_int[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @elf_int: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *elf_int)
{
	printf("  Data:                              ");

	switch (elf_int[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_int[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @elf_int: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *elf_int)
{
	printf("  Version:                           %d",
	       elf_int[EI_VERSION]);

	switch (elf_int[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @elf_int: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *elf_int)
{
	printf("  OS/ABI:                            ");

	switch (elf_int[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_int[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @elf_int: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *elf_int)
{
	printf("  ABI Version:                       %d\n",
	       elf_int[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @elf_int: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *elf_int)
{
	if (elf_int[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @elf_int: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *elf_int)
{
	printf("  Entry point address:               ");

	if (elf_int[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elf_int[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - displays the information contained in the ELF header of a given file
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: On success, return 0. On error, return 1.
 */
int main(int argc, char *argv[])
{
    int fd;
    unsigned char elf_int[EI_NIDENT];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <ELF-file>\n", argv[0]);
        return (EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return (EXIT_FAILURE);
    }

    if (read(fd, elf_int, EI_NIDENT) != EI_NIDENT)
    {
        fprintf(stderr, "Error: Cannot read file\n");
        close(fd);
        return (EXIT_FAILURE);
    }

    check_elf(elf_int);
    print_magic(elf_int);
    print_class(elf_int);
    print_data(elf_int);
    print_version(elf_int);
    print_abi(elf_int);
    print_osabi(elf_int);
    /*code to read and print other sections of ELF file*/

    close_elf(fd);

    return (EXIT_SUCCESS);
}

