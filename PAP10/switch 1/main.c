#include <stdio.h>
#include <stdlib.h>

void printDayMonth(int month,int year){
  //print current month and year
  char months[12][10]={"January","February","March","April","May","June","August","September","Oktober","November","December"};
  printf(" %s %d\n",months[month-1],year);

  //calculate count of day in specified months
  int dayscount;
  if(month==4||month==6||month==9||month==11){
    dayscount=30;
  }else if(month==2){
    if((year%4==0 && year%100!=0) || (year%400==0)){
      dayscount = 29;
    }else{
      dayscount = 28;
    }
  }else{
    dayscount = 31;
  }

  //calculate what day of 1st in specified months
  int dayofweek;
  dayofweek=((year-=month<3)+year/4-year/100+year/400+"-bed=pen+mad."[month]+1)%7;
  //printf("%d %d\n",dayscount,dayofweek); //debug_line_can_be_removed

  //print the calendar
  int i,j;
  printf(" SUN MON TUE WED TRU FRI SAT\n");
  for(i=1,j=1;i<=dayscount+dayofweek;i++){
    if(i>dayofweek){
      printf("  %2.d",j);
      if(i%7==0 && i<dayscount+dayofweek){
        puts("");
      }
      j++;
    }else{
      printf("    ");
    }
  }
  puts("");
}



int main()
{
    int pilihan;
    char month[255];
    char year[255];

    printf("===========");
    printf("\n1. Available Schedule\n");
    printf("2. Delete Schedule\n");
    printf("3. Input New Schedule\n");
    printf("===========\n");
    printf("Pilhan anda : ");
    scanf("%d",pilihan);
    switch(pilihan){
        case 1:

            break;
        case 2:

            break;
        case 3:
            printf("Masukan tahun : ");

            printDayMonth(month,year);
            break;
        default:
            printf("Pilihan anda salah");
    }
    return 0;
}
