#include "game.h"

int unlock_branch(const Progress *progress)
{
    int stamps_per_ticket = 2;
    return progress_tutorial_count(progress) / stamps_per_ticket >= 1;
}
