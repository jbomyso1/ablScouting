#define PITCHER_H_
#ifndef PITCHER_H_

#include "pitcherNum.h"

struct pitcher 
{
std::string name;

//if true, throws right handed, if false, throws left handed
bool righty;

//bool array to determine if starter, long reliever, short reliever, or closer (or combination of the options)
bool position[4];

//array represents [range, error rating, hold, steal, pick off, balk, wild pitch]
//steal value can be 0 or negative, which is better than positive numbers.
short defense[7];

//symbols will be true if the pitcher possesses them.  [0] = B, [1] = R, [2] = L, [3] = F, [4] = H
bool symbols[5];

//this is to represent the pitcher's numbers against left and right handed hitting 
pitcherNum left;
pitcherNum right;

};
#endif
