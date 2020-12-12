#include<iostream>
using namespace std;


class PlainBox
{
 public:
  PlainBox();
  PlainBox(string itemIn);
  virtual void setItem(string itemIn);
  string getItem();
 private:
  string item;
}; 

class MagicBox: public PlainBox
{
 public:
  MagicBox();
  MagicBox(string itemIn);
  void setItem(string itemIn);
 private:
  bool firstItemStored;
};
