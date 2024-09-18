#include<iostream>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define S 50

using namespace std;
int main()
{
		setlocale(LC_ALL,"portuguese");
		
		char digitado[50];
    	char c;
    	int cont=0;
    	
    	
 		int n, i, menu, qp, dp, op=0;
 		float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
		float vx=0, vy=0, prev=0, reaj=0, rece=0;
		int xl, yl;

		
 			cout<<"Digite a quantidade de pontos de dados: ";
 			
 			
 			
 		do
    	{
       		c=getch();
       		if (isdigit(c)!=0)
       		{
          		digitado[cont] = c;
          		cont++;
          		cout<< c;
       		}
       		else if(c==8&&i)
       		{
          		digitado[cont]='\0';
          		cont--;
          		cout<<"\b \b";
       		}
    	}while(c!=13);
    
    	digitado[cont]='\0';
    	n = atoi(digitado);
    		
    		

 			cout<<"\nDigite os dados:"<< endl;

 			for(i=1;i<=n;i++)
 		{
  			cout<<"x["<< i <<"] = ";
 			cin>>x[i];
  			cout<<"y["<< i <<"] = ";
  			cin>>y[i];
 		}
 		system("clear||cls"); 
 		
 		while(op==0)
	{
		
			cout<<"\n\n0 Aumentar os Pontos\n1 Diminuir os Pontos\n2 Trocar um valor de X\n3 Trocar um valor de Y\n4 Exibir Toda Matriz\n5 Calcular\n6 Fazer Previsao\n7 Sair\nEscolha: ";
			cin>>menu;
			
			
			
			switch(menu)
			{
				
				case (0):
					system("clear||cls");
					cout<<"\nDigite a quantidade de pontos que deseja aumentar: ";
	    			cin>>qp;
	    			n=(n+qp);
	    			qp=0;
				break;
				
				case (1):
					system("clear||cls");
					cout<<"\nDigite a quantidade de pontos que deseja diminuir: ";
	    			cin>>dp;
	    			if(n <=dp){
	    				system("clear||cls");
						cout<<"\nValor Inválido";
						cout<<"\nValor atual de pontos "<<n;
					}else{
						n=(n-dp);
					}
	    			dp=0;
				break;
				
				case(2):
					system("clear||cls");
					cout<<"\nDigite o Endereço de X: ";
				    cin>>xl;
				    cout<<"\nDigite um novo valor para X: ";
					cin>>vx;
					x[xl] = vx;
					vx=0;
				break;
				
				case(3):
					system("clear||cls");
					cout<<"\nDigite o endereço de y: ";
					cin>>yl;
					cout<<"\nDigite um novo valor para Y: ";
					cin>>vy;
					y[yl] = vy;
					vy=0;
				break;
				
				
				case (4):
					system("clear||cls");
					cout<<"\n";
 					cout<<"|___X |___Y___|";
 					cout<<"\n";
 				for(i=1;i<=n; i++)
 				{
 					cout<<"|__"<<x[i]<<"_|__"<<y[i]<<"___|"<< endl;
 				}
 					cout<<"\n";
 					
 				break;
 				
 				case(5):
 					a=0;
					b=0;
 					system("clear||cls");
					cout<<"\n";	
 					for(i=1;i<=n;i++)
 					{
  						sumX = sumX + x[i];
  						sumX2 = sumX2 + x[i]*x[i];
 						sumY = sumY + y[i];
 						sumXY = sumXY + x[i]*y[i];
 					}
 						
 		
 					b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 					a = (sumY - b*sumX)/n;

 			
 						cout<<"O valor calculado de a é "<< a << endl;
						cout<<"O valor calculado de b é "<< b << endl;
 						cout<<"A equação de melhor ajuste é: y = "<< b <<"x e "<< a ;
 						cout<<"\n";
 					
						sumX =0;
						sumX2=0;
						sumY=0;
						sumXY=0;
						
				break;
				case (6):
					prev=0;
					system("clear||cls");
					cout<<"\nDigite um valor para previsao: ";
	    			cin>>prev;
	    			reaj= b*prev+a;
	    			rece =(b*prev+a)*prev;
	    			cout<<"\nA previsao para: " <<prev<< " é " <<reaj;
	    			cout<<"\nA receita para: " <<prev<< " é "  <<rece;
	    			
				break;
				
				case(7):
					system("clear||cls");
					cout<<"\nOperação Finalizada!";
					op=1;
				break;
				
				default:
					system("clear||cls");
					cout<<"\n***********ERRO****************\n| Escolha uma opção de 0 a 7: |\n*******************************";
				break;
				
				

			}

 	}

 return(0);
}
