
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LEN 100
#define MAX_AUTHOR_LEN 100

// 
typedef struct {
    int id;
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

// 
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &library[bookCount].id);
    printf("Enter book title: ");
    getchar(); //
    fgets(library[bookCount].title, MAX_TITLE_LEN, stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0'; // 
    printf("Enter author name: ");
    fgets(library[bookCount].author, MAX_AUTHOR_LEN, stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0'; // 

    bookCount++;
    printf("Book added successfully!\n");
}

//
void searchBook() {
    char title[MAX_TITLE_LEN];
    printf("Enter the title to search for: ");
    getchar(); //
    fgets(title, MAX_TITLE_LEN, stdin);
    title[strcspn(title, "\n")] = '\0'; // 

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found: ID=%d, Title=%s, Author=%s\n", library[i].id, library[i].title, library[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}

// 
void deleteBook() {
    int id;
    printf("Enter the ID of the book to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

// 
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("List of books in the library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID=%d, Title=%s, Author=%s\n", library[i].id, library[i].title, library[i].author);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nBook Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Delete Book by ID\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}