#include<stdio.h>

int main()
{
    int two, three, five;
    for(two = 0; two * 0.2 < 5; two++)
    {
        for(three = 0; three * 0.3 < 5; two++)
        {
            for(five = 0; five * 0.5 < 5; five++)
            {
                if(five * 0.5 + three * 0.3 + two * 0.2 ==5)
                {
                    printf("two is %d\nthree is%d\nfive is %d\n\n", two, three, five);
                    goto out;
                }
            }
        }
    }

    out:
        printf("the loop is over.");
        return 0;
}