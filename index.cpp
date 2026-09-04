#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
enum trend {
   BULL_MARKET,
   HOLD
   
}; 
struct user {
   int id;
   double price;
   string valid;
   string market;
   
};
void marketoder(int a){
   cout<<"\n--------------------";
   cout<<"\n[ENGINE CALIBRATION - FUNCTION OVERLOADING]";
   cout<<"\nStandard Market Order (1 Param)  : Order:"<<a;
   cout<<"\nBase Fee: $1.50";
   
};
void marketoder(int a ,double b){
   cout<<"\nLimit Order Setup (2 Params)     : Order #"<<a;
   cout<<"\nTarget Limit: $"<<b;
};
void moneycaptial (double &a,double b = 1){
   a -= (100*b);
};
int marketfeed(int a){
   if(a==0) return 1;
   return a*marketfeed(a-1);
}

int main()
{  double price[2][2]={
   {150.25,150.30},
   {150.10,150.45}
};
   string group[2][2]={
      {"Exchange A Bid ","Exchange B ask:"},
      {"Exchange C Bid:","Exchange D ask:"}
   };
   int select;
   user sam;
   bool repeat = true;
   int dynamic;
   sam.id = 8841;
   sam.price = 150.30;
   const double levarage = 10.00;
   int feed = 4;
   char identifer = 'Q';
   string  enginestatus  = "active";
   double captial = 10000.00;
   cout << "\n====================================\n";
   cout << "  QUANT-X : HFT MATCHING ENGINE v1.0   \n";
   cout << " Sub-Microsecond Engine & Telemetry \n";
   cout << "====================================\n";
   cout<<"\n[KERNEL BOOT] Initializing QUANT-X Core Matching Engine...\n\n[COMPILER VERIFIED] C++ ISO/IEC 14882 Compliant | Target: Low-Latency x86_64\n\n[EXCHANGE LINK] Market ID: NASDAQ-QUANT-01 | Gateway: Direct Direct-Memory Access (DMA)";
   cout<<"\n\t----------------------";
   cout<<"\n[HARDWARE & MARKET PARAMETERS INITIALIZED]\n* Maximum Safe Leverage Constant: "<<levarage<<"\n* Active Market Feeds: "<< feed <<"Exchanges\n* Engine Online Status: "<<enginestatus<<"\n* Trading Mode Identifier: "<<identifer<<" [Quantitative High-Frequency]";
   cout<<"\n\t----------------------";
      while(repeat){
   cout<<"\n\n=== QUANT-X TRADING COMMAND CENTER ===\n[1] Display Real-Time Order Book Matrix & Risk Logic\n[2] Calculate Arbitrage Route Risk (Recursive Factorial Engine)\n[3] Calibrate Market Orders (Function Overloading)\n[4] Execute Live Trade & Direct RAM Audit (Call-by-Reference & Pointers)\n[5] Allocate Dynamic Order Log Buffer (Heap Memory)\n[6] Emergency Market Halt & Exit";
   cout<<"\n\nEnter Command Selection (1-6): ";
   cin>>select;
   switch(select){
      case 1:{
   cout<<"[MARKET SWEEP] Processing 2x2 Order Book Depth Matrix (USD)..\n";
   for(int i =0;i<2;i++){
      for(int j =0;j<2;j++){
         cout<<"["<<group[i][j]<<": "<<price[i][j]<<"] "<<" ";
      }
      cout<<endl;
   }//for loop main 
   cout<<"\n\t------------";
   cout<<"\n[AUTOMATED TRADING LOGIC EVALUATION]\n";
   cout<<"\n* Spread Check : "<<group[0][0]<<" < Target Buy Threshold ($155.00)\n";
   if(price[0][0]<=150.30){
      cout<<"\nRisk Engine  : Condition Activiated\n";
      cout<<"\n  * Action Taken : [HIGH-FREQUENCY BUY ORDER EXECUTED]\n";
      trend look =  BULL_MARKET;
      if(look==trend::BULL_MARKET){
         
         sam.market = " BULL_MARKET";
         sam.valid = "true";
      }
   }else if(price[0][0]>150.00){
           cout<<"\nRisk Engine  : Condition REJECTED";
      cout<<" \n * Action Taken :[ORDER HOLD - NO TRADE]"; 
      trend look =  HOLD;
      if(look==trend::HOLD){
         
         sam.market = " HOLD";
         sam.valid = "false";
      }
   }
         cout<<"\t\n-------------";
         cout<<"\n[TELEMETRY LOG]";
         cout<<"\n* Asset Ticker String : NVDA-QUANT-STOCK";
         cout<<"\n* Market Trend Enum :"<<sam.market;
         cout<<" \n* Trade Order Struct  : { Order_ID: "<<sam.id<<", Price: "<<sam.price<<", Valid: "<<sam.valid<<"}";
           cout<<"\t-------------";
         break;
      }//case 1 
      case 3:{
     marketoder(sam.id);
         marketoder(sam.id,149.80);
         break;
      }//case 3
      case 4:{
        cout<<"---------------";
        cout<<"\n[TRADE EXECUTION & RAM AUDIT]\n";
         cout<<"\nInitial Capital :"<<captial;
         moneycaptial(captial);
         cout<<"\nAfter Base Fee: "<<captial<<"$";
         moneycaptial(captial,2.00);
          cout<<"\nAfter Leveraged Fee: "<<captial<<"$";
         cout<<"\n\n[HARDWARE RAM AUDIT]";
         double * ptr = &captial;
         cout<<"\n* Target Variable: money captial";
         cout<<"\n* Physical Memory Slot : "<<ptr;
         cout<<"\n* Live Stored Value    : "<<*ptr<<"$";
         break;         
      }//case 4
      case 5:{
         cout<<"[DYNAMIC TRADE LOG BUFFER (HEAP MEMORY)]";
         cout<<"How many real-time trade ticks to log into memory? ";
         cin>>dynamic;
         int *memory = new int [dynamic];
         for(int i =0;i<dynamic;i++){
            cout<<"Enter Price for Tick #"<<i<<"$: ";
            cin>>memory[i];
         }
         cout<<"--- HEAP MEMORY READOUT ---";
         for(int i =0;i<dynamic;i++){
            cout<<"\nTick Entry #"<<i<<": $"<<memory[i]<<endl;
         }
         delete[] memory;
         cout<<"[RAM FREED] Memory deallocated cleanly. Zero leaks detected"<<endl;
        break; 
      }//case 5
      case 6:
       repeat = false;
      break;
      case 2:{
       cout<<"--------------------";
       cout<<"[RECURSIVE RISK ENGINE]";
         cout<<"\nEnter number of active exchange feeds to evaluate:";
         cin>>feed;
       cout<<"\n* Active Market Feeds :"<<feed; 
         cout<<"\n* Permutation Formula :"<<feed<<"!";
         cout<<"\n* Total Math Paths    :"<<marketfeed(feed)<<"Valid Arbitrage Routes"<<endl;
      }//case2
      
   }//switch
   }//main for loop
   cout<<"[SYSTEM SHUTDOWN] Terminating QUANT-X Engine... Market gateway closed safely."<<endl;
   return 0;
}//main