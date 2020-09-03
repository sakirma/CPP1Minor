//
// Created by husey on 3-9-2020.
//

int main ()
{
    int var1 /* 9 */, var2 /* 78 */;
    int *ptr1 , *ptr2;

    ptr1 = &var1;
    ptr2 = &var2;

    *ptr1 = 63;
    *ptr2 = 9;

    *ptr1 = *ptr2;
    ptr1 = ptr2;

    *ptr1 = 78;

    Melisa I like C++ so much! wow!

    return 0;
}
