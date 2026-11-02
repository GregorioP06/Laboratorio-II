#include <stdio.h>
#include <stdlib.h>
typedef struct Student {
    int matricola;
    int età;
    struct Student *left;
    struct Student *right;
} Student;

Student *insert(Student *root, Student *node) {
    if (root == NULL) {
        return node;
    }
    if (node->età < root->età) {
        if (root->left == NULL)
            root->left = node;
        else
            insert(root->left, node);
    } else {
        if (root->right == NULL)
            root->right = node;
        else
            insert(root->right, node);
    }
    return root;
}

void in_order_visit(Student *node) {
    if (node == NULL)
        return;
    in_order_visit(node->left);
    printf("%d %d\n", node->matricola, node->età);
    in_order_visit(node->right);
}

void stampa_età(Student *node, int età) {
    if (node == NULL)
        return;
    if (età < node->età) {
        stampa_età(node->left, età);
    } else {
        if (età == node->età) {
            printf("%d\n", node->matricola);
        }
        stampa_età(node->right, età);
    }
}

int main(void) {
    Student *s;
    Student *root = NULL;
    do {
        s = malloc(sizeof(Student));
        if (s == NULL)
            return EXIT_FAILURE;
        scanf("%d", &s->matricola);
        if (s->matricola != 0) {
            scanf("%d", &s->età);
            s->left = NULL;
            s->right = NULL;
            root = insert(root, s);
        }
    } while (s->matricola != 0);

    puts("Stampa in ordine età crescente");
    in_order_visit(root);
    int età;
    printf("Input età di ricerca: ");
    scanf("%d", &età);
    stampa_età(root, età);
}
