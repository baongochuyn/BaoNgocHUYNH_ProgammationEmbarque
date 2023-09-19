#ifndef EX06_H
#define EX06_H

struct s_person {
    char name[50];
    int age;
};

typedef struct s_person t_person;

void print_person(t_person person);

#endif
