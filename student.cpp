/*#include "student.h"

student ::  student()  //null constructors
  {
    this->name="Hamza";
    this->seatno=48;
    this->index=0;
    this->course[0] = "BSCS 401";
    this->course[1] = "BSCS 402";
  };

  student :: student(string name,int seat , string course[10]) //perimetrized constructor
  {
    int i;
    this->name=name;
    this->seatno=seat;
    this->index=0;
    for(i=0;i<10;i++)
    {
      this->course[i] = course[i];

    }
  };

 student :: student(student& clone)  //copy constructor
  {
    int i;
    clone.name=this->name;
    clone.seatno=this->seatno;
    clone.index=this->index;
    for(i=0;i<=index;i++)
    {
      clone.course[i]=this->course[i];

    }
  };

  void student :: setname(string name)  //setters functions
  {
    this->name=name;
  }
  void student :: setseatno(int seat)
  {
    this->seatno=seat;
  };
  void student :: setcourse(string course[10])
{
  int i;
  for(i=0;i<10;i++)
  {
    this->course[i]=course[i];
  }
};

string student :: getname()  //getters functions
{
  return this->name;
};

int student :: getseatno()
{
  return this->seatno;
};

string student :: getcourse()
{
  int i;
  for(i=0 ; i < index ; i++)
  {
    return this->course[index];
  }
};

string student :: getcourse(int index)
{
  return this->course[index];
};

void student :: addcourse(string course) //For adding courses
{
  this->course[this->index] = course;
  this->index ++;
};

 void student  :: operator = (const student& S) //assignment operator
{
  int i;
  this->name = S.name ;
  this->seatno = S.seatno;
  this->index = S.index;
  for(i=0 ; i < this->index ; i++)
  {
    this->course[i] = S.course[i];
  }
};
*/
