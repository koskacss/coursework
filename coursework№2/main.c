#include "includesH/declarations.h"
#include "includesH/menu.h"
#include "includesH/file.h"
#include "includesH/list.h"

int main()
{
    FILE *fp;
    carHead *head;
    
    if((fp = fopen("cart.csv" , "r")) != NULL){
        head = init_head(head);
        read_file(fp , head);
        fclose(fp);
        menu(head,fp);
        clear_list(head);
    } else {puts("Error while openning file!");}
    
    return 0;
}