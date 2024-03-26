#include "list.h"
int test3(){
int i,score = 0;
    char q;	
        for (i = 0; i < 3; i++)
        {
            q=randomCharacter();
            if (test(2, q))
                score += 10;
        }
        for (i = 0; i < 4; i++)
        {
            q=randomCharacter();
            if (test(3, q))
                score += 10;
        }
        for (i = 0; i < 3; i++)
        {
            q=randomCharacter();
            if (test(4, q))
                score += 10;
        }
        return score;
}
