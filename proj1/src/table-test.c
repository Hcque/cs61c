
#include <stdio.h>
#include "tables.h"

void testcase1(){
    SymbolTable* st = create_table(SYMTBL_NON_UNIQUE);
    add_to_table(st, "one", 12);
    add_to_table(st, "two", 24);
    add_to_table(st, "three", 36);
    add_to_table(st, "four", 48);
    add_to_table(st, "five", 56);

    int act = get_addr_for_symbol(st, "five");
    printf("%d, %d\n", 5, act);
    act = get_addr_for_symbol(st, "six");
    printf("%d, %d\n", -1, act);
    add_to_table(st, "six", 60);

    printf("cap:%d, %d\n", 7, st->cap);
    printf("len:%d, %d\n", 6, st->len);
    free_table(st);
}

int main()
{   
    printf("expected actural\n");
    testcase1();
    return 0;
}
