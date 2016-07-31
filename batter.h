#define HITTER_H_
#ifndef HITTER_H_
#include "numbers.h"

struct hitter
{
std::string name;

//This will be the side the player can hit from, either right handed (rp or rsp), left handed (lp or lsp), or switch (bp or bsp)
//If one value, used for both infield and outfield range plays.  Two values is (infield range)/(outfield range).  Second value (or if only one, the first value)  also used on deep chart plays
std::string bats;

//this is for vs. lefties and vs. righties
numbers left;
numbers right;

//1 = pitcher, 2 = catcher, 3 = first base, 4  = second base, 5 = third base, 6 = shortstop, 7 = left field, 8 = center field, 9 = right field, 0 = DH only
//boolean true means they can play the position
bool position[10];

//0 = not available at that position, 1 = weak, 2 = poor, 3 = mediocre, 4 = fair, 5 = average, 6 = very good, 7 = superior
short defense[9];

//error rating will correspond by position as listed above, with a 1 (poor) to 20 (outstanding) rating
short error[9];

//[0] = speed, [1] = steal [2] = jump, [3] = bunt, [4] = injury
short speedStats[5];
};
#endif
