#pragma once

void read_file(FILE *fp , carHead *head); // Function for reading data from file
char **split(char **text , char *string , char *sep); // Function for splitting string in element of array
void clear_array(char **arr, int count); // Function for clearing memory of string array
carNode *arr_to_node(char **arr, int id); // Function for transforming string into element of the list
void fill_from_file(carHead *head , carNode *node , carNode *cur_node); // Function for adding elements from file to list