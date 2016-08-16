#ifndef PITCHER_H_
#define PITCHER_H_


struct pitcherNum
{
unsigned short rIF;
unsigned short rOF;
unsigned short efCF;
unsigned short rg1;
unsigned short gcf;
unsigned short efOF;
unsigned short rg2;
unsigned short sg;
unsigned short hbp;
unsigned short sgl;
unsigned short dbl;
unsigned short deep;
unsigned short efTired;
unsigned short ko;
unsigned short koTired;
unsigned short bb;
unsigned short dp;
};


struct pitcher 
{
  std::string name;
std::string team;

  //if true, throws right handed, if false, throws left handed
  bool righty;
  
  //bool array to determine if starter, long reliever, short reliever, or closer (or combination of the options)
  bool position[4];
  unsigned short stamina;
  
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
