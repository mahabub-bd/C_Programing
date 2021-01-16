#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool has_nid = false;
    bool is_adult = true;
    bool has_passport = true;
    //bool is_permitted = have_nid && is_adult;
    bool is_permitted = (has_nid || has_passport) && is_adult;
    printf("Permission - %d\n" , is_permitted);

    return 0;
}