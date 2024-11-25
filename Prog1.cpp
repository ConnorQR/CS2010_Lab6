#include <iostream>
#include <vector>
#include "Prog1_Files"
#include <algorithm>
using namespace std;
using alloc = pair<range,int>;

extern alloc a;
auto [allocated, leasesExpiry] = r;

extern const int Min_Lease;
extern const int Max_Lease;
extern int Lease;
extern int LeaseExpiry;
extern const int Min_Size;
extern const int Max_Size;
extern int Size;
extern const int Time_Limit;
extern const int Memory_Size;
extern const int Request_Interval;
extern long clock;

extern int Total_Requests;
extern int Satisfied;
extern int Unstatisfied;
extern int Min_Size_Requested;
extern int Max_Size_Requested;
extern int Shortest_Lease;
extern int Longest_Lease;
extern int Average_Lease;
extern int Times_Merged;


int main () {

   range r = make_pair(0,1000);
   range p = make_pair(make_pair(20,100), 45);
   Free f;
   alloclist a;
   f.pushback(r);
   a.pushback(p);
   printfree(f);
   sort(f.begin(),f.end(),Comp);
   sort(a.begin(),a.end(),Comp);


   long int clock = 0;
   do{
      if (clock % Request_Interval){
         CreateRequest();
      }
      CheckLeaseExpiry(f,a,clock)
   }
   while (++clock == Time_Limit);

   Report();

   return 0;
}