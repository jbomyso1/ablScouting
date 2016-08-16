#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

#include "batter.h"
#include "pitcher.h"

int main(void)
{
  std::ifstream fin;
  std::string firstname;
  std::string lastname;
  hitter temp;

  std::vector<hitter> batters;
  
  fin.open("LBIbatter.data");
  
  while(fin >> firstname >> lastname >> temp.team >> temp.bats)
    {
      int numPos;

      temp.name = firstname;
      temp.name += " ";
      temp.name += lastname;
      
      fin >> temp.left.gcf >> temp.left.dbl1 >> temp.left.dp
	  >> temp.left.sgl >> temp.left.trp >> temp.left.sf
	  >> temp.left.hr >> temp.left.hb >> temp.left.rg1
	  >> temp.left.bb >> temp.left.k >> temp.left.dbl2
	  >> temp.left.rg2 >> temp.left.ef;
      fin >> temp.right.gcf >> temp.right.dbl1 >> temp.right.dp
	  >> temp.right.sgl >> temp.right.trp >> temp.right.sf
	  >> temp.right.hr >> temp.right.hb >> temp.right.rg1
	  >> temp.right.bb >> temp.right.k >> temp.right.dbl2
	  >> temp.right.rg2 >> temp.right.ef;

      fin >> numPos;

      for(int i = 0; i < numPos; i++)
	{
	  int position;
	  int defense;
	  int error;

	  fin >> position >> defense >> error;

	  temp.position[position] = true;
	  temp.defense[position] = defense;
	  temp.error[position] = error;
	}
      fin >> temp.speedStats[0]>> temp.speedStats[1] >> temp.speedStats[2]
	  >> temp.speedStats[3] >> temp.speedStats[4];

      batters.push_back(temp);
    }
  return 0;
}
