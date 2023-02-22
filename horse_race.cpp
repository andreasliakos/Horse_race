#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;
 
	
	class horse
	{	
 

		public:
		int id;
		int startup_speed;
		int power;
		int stamina;
		string name;
		
		
	
		bool move_forward(int step, int r )
		{
			
			
		
			if (step == 1)	
			{ 
				if (startup_speed > r )
				{    
					return true;	
				}
			}else if (step>=2 && step<=8 && power>r)
			{
					return true;
				
			}else if (step>8 && ((power+stamina)/2) >r)
			{
					return true;
			
			}else{
		 
				return false;
			}
		}
	
		void stats(int a, int b, int c)
		{
		startup_speed = a;
		power = b;
		stamina = c;	
		}

		};

		
		
	int main(){
		
			
		srand((0));
		int bet;
		int cash=100;
		int horses=4;
    	int rounds=10;
		int hbet;
		 
		 
        horse h0;
        h0.id=0;
        horse h1;
        h1.id=1;
        horse h2;
        h2.id=2;
        horse h3;
        h3.id=3;
        horse h4;
        h4.id=4;
        horse h5;
        h5.id=5;
        horse h6;
        h6.id=6;
        horse h7;
        h7.id=7;
        horse h8;
        h8.id=8;
        horse h9;
        h9.id=9;	

		while (1)
		{
			int rank[10]={10,10,10,10,10,10,10,10,10,10};
			int rank_position=0;
			string input;
				
			cout << "ladies and gentleman the race will start soon!!!"<<endl;
			
			cout<<"ladies and gentlemen the race begins"<<endl;		
  
  
  
			cout << "Give me the numbers of rounds from 0 to 20: " << endl;
			cin  >> rounds; 
			 
			 
			cout << "how many horse do you want: " << endl;
			cin  >> horses; 
			
			
			string Names_Of_Horses[10]={"Blitz", "Bolt", "Goliath", "Hercules", "Rogue", "Danger", "Raider", "Storm", "Nitro", "Hulk"};

			random_shuffle ( &Names_Of_Horses[0], &Names_Of_Horses[10] );
			h0.name=Names_Of_Horses[0];
			h1.name=Names_Of_Horses[1];
			h2.name=Names_Of_Horses[2];
			h3.name=Names_Of_Horses[3];
			h4.name=Names_Of_Horses[4];
			h5.name=Names_Of_Horses[5];
			h6.name=Names_Of_Horses[6];
			h7.name=Names_Of_Horses[7];
			h8.name=Names_Of_Horses[8];
			h9.name=Names_Of_Horses[9];
			
			
		
			int bet=0;

			
			
			cout << "Your cash is: " << cash << "euros" << endl;
			
				cout << "choose one horse from below:"<< endl;
			    if (horses>=1)
				{
				cout << h0.id << " " << h0.name <<endl;
				}
				
				if (horses>=2)
				{
				cout << h1.id << " " << h1.name <<endl;
				}
				
				if (horses>=3)
				{
				cout << h2.id << " " << h2.name <<endl;
				}
				
				if (horses>=4)
				{
				cout << h3.id << " " << h3.name <<endl;
				}
				
				if (horses>=5)
				{
				cout << h4.id << " " << h4.name <<endl;
				}
				
				if (horses>=6)
				{
				cout << h5.id << " " << h5.name <<endl;
				}
				
				if (horses>=7)
				{
				cout << h6.id << " " << h6.name <<endl;
				}
				
				if (horses>=8)
				{
				cout << h7.id << " " << h7.name <<endl;
				}
				
				if (horses>=9)
				{
				cout << h8.id << " " << h8.name <<endl;
				}
				
				if (horses>=10)
				{
				cout << h9.id << " " << h9.name <<endl;
				}

				do { 
						cin  >> bet; 
					} while (!( bet>=0 &&  bet<=100)); 
				
					cout << "How much do you want to bet?" << endl;
					cin>>bet;	
			
			
			
			h0.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h1.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h2.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h3.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h4.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h5.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h6.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h7.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h8.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			h9.stats(50+(rand() % 50),50+(rand() % 50),50+(rand() % 50));
			
			
			
			int position[10]= {0,0,0,0,0,0,0,0,0,0};
			int current_round = 0;
		    while  (current_round != rounds+1)
			{	
		     	cout << "your lap is  :" << current_round <<"/"<<rounds << endl;
			 	current_round++; 
			 
	  		 	if (horses>=1)
	  	     	{
			    	for(int j=0;j<rounds;j++)
			    	{
		    			if (j!=position[0])
						cout << ".";
						else
						cout << h0.id;
			    	}
						cout<<endl;
			
			   		

			   		if (h0.move_forward(current_round,(rand() % 100)))
			   		{
						if(position[0]!=rounds-1)
						{
							position[0]++;
						}	
			   		}		
			 	}
				
				
			 	if (horses>=2)
	  		 	{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[1])
						cout << ".";
						else
						cout << h1.id;
					}	
					cout<<endl;
					if (h1.move_forward(current_round,(rand() % 100)))
					{
						 if(position[1]!=rounds-1)
				 		{
							position[1]++;
				 		}	
					}	
			 	}
				
			 	if (horses>=3)
	  		 	{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[2])
						cout << ".";
						else
						cout << h2.id;
					}
					cout<<endl;
					if (h2.move_forward(current_round,(rand() % 100)))
					{
				 		if(position[2]!=rounds-1)
				 		{
							position[2]++;
				 		}		
					}	
			 	}
				
				if (horses>=4)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[3])
						cout << ".";
						else
						cout << h3.id;
					}
					cout<<endl;	
					if (h3.move_forward(current_round,(rand() % 100)))
					{
				 		if(position[3]!=rounds-1)
				 		{
							position[3]++;
					 	}		
					}
				}
				
				if (horses>=5)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[4])
						cout << ".";
						else
						cout << h4.id;
					}
					cout<<endl;	
					if (h4.move_forward(current_round,(rand() % 100)))
					{
						if(position[4]!=rounds-1)
						{
							position[4]++;
						}	
					}
				}
				
				if (horses>=6)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[5])
						cout << ".";
						else
						cout << h5.id;
					}
					cout<<endl;	
					if (h5.move_forward(current_round,(rand() % 100)))
					{
						if(position[5]!=rounds-1)
						{
							position[5]++;
						}	
					}
				}
				
				if (horses>=7)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[6])
						cout << ".";
						else
						cout << h6.id;
					}
					cout<<endl;	
					if (h6.move_forward(current_round,(rand() % 100)))
					{
						if(position[6]!=rounds-1)
						{
							position[6]++;
						}	
					}
				}
				
				if (horses>=8)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[7])
						cout << ".";
						else
						cout << h7.id;
					}
					cout<<endl;	
					if (h7.move_forward(current_round,(rand() % 100)))
					{
						if(position[7]!=rounds-1)
						{
							position[7]++;
						}
					}
				}
				
				if (horses>=9)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[8])
						cout << ".";
						else
						cout << h8.id;
					}
					cout<<endl;	
					if (h8.move_forward(current_round,(rand() % 100)))
					{
						if(position[8]!=rounds-1)
						{
							position[8]++;
						}	
					}
				}
				
				if (horses>=10)
	  			{
					for(int j=0;j<rounds;j++)
					{
						if (j!=position[9])
						cout << ".";
						else
						cout << h9.id;
					}
					cout<<endl;	
					if (h9.move_forward(current_round,(rand() % 100)))
					{
						if(position[9]!=rounds-1)
						{
							position[9]++;
						}	
					}
				}
				
				
				cout<<"Want to go the next round?"<<endl;
				cin>>input;	
							
				if (position[0]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h0.id)
						{
							flag=0;
						}	
					}
					if(flag=1)
					{
						rank[rank_position]=h0.id;
						rank_position++;
					}
				}
				
				
				
				if (position[1]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h1.id)
						{
							flag=0;
						}	
					}
					if(flag=1)
					{
						rank[rank_position]=h1.id;
						rank_position++;
					}
				}
				
				
				
				if (position[2]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h2.id)
						{
							flag=0;
						}
					}
					if(flag=1)
					{
						rank[rank_position]=h2.id;
						rank_position++;
					}
				}
				
				
				if (position[3]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h3.id)
						{
							flag=0;
						}
					}
					if(flag=1)
					{
						rank[rank_position]=h3.id;
						rank_position++;
					}
				}
				
				
				if (position[4]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h4.id)
						{
							flag=0;
						}
					}
						if(flag=1)
						{
						rank[rank_position]=h4.id;
						rank_position++;
						}
				}
				
				
				
				if (position[5]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h5.id)
						{
							flag=0;
						}
					}
						if(flag=1)
						{
						rank[rank_position]=h5.id;
						rank_position++;
						}
				}
				
				
				
				if (position[6]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h6.id)
						{
							flag=0;
						}
					}
						if(flag=1)
						{
							rank[rank_position]=h6.id;
							rank_position++;
						}
				}
				
				
				
				
				if (position[7]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
							if(rank[k]==h7.id)
							{
								flag=0;
							}
					}
						if(flag=1)
						{
							rank[rank_position]=h7.id;
							rank_position++;
						}
				}
				
				
				
				
				if (position[8]==rounds-2)
				{
					int flag=1;
					for(int a=0;a<10;a++) 
					{
						if(rank[a]==h8.id)
						{
							flag=0;
						}	
					}
					if(flag=1)
					{
						rank[rank_position]=h8.id;
						rank_position++;
					}
				}
				
				
				
				
				if (position[9]==rounds-2)
				{
					int flag=1;
					for(int k=0;k<10;k++) 
					{
						if(rank[k]==h9.id)
						{
							flag=0;
						}	
					}
					if(flag=1)
					{
						rank[rank_position]=h9.id;
						rank_position++;
					}
				}
				
				
	
			}	
				for (int i=0; i < horses; i++)
				{
				
					cout<< rank[i] << " ";
				
						switch (rank[i])
						{
							case 0:
								cout << h0.name << endl;
							break;
							
							case 1:
								cout << h1.name << endl;
							break;
							
							case 2:
								cout << h2.name << endl;
							break;
							
							case 3:
								cout << h3.name << endl;
							break;
							
							case 4:
								cout << h4.name << endl;
							break;
							
							case 5:
								cout << h5.name << endl;
							break;
							
							case 6:
								cout << h6.name << endl;
							break;
							
							case 7:
								cout << h7.name << endl;
							break;
							
							case 8:
								cout << h8.name << endl;
							break;
							
							case 9:
								cout << h9.name << endl;
							break;
									
						}
						
				}
				
				if (hbet==rank[0])
				{
					cash=bet*2;	
					cout << "Your cash is " << cash <<" "<<"euros" << endl;
				}
				else if (hbet==rank[1] && hbet==rank[2])
				{
					cash=cash-bet;
					cout << "Your cash is " << cash <<" "<<"euros" << endl;
				}
				else
				{
					cash=cash+bet;
						}		
				
			if(cash<=0)
			{
					return 0;
			}
		}
	}

