#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>


   
#define CRT_SECURE_NO_WARNINGS
//pointer gia to kathe arxio
FILE *output_file;
FILE *input_file;
FILE *output_file_2;
FILE *output_file_3;
FILE *output_file_4;

errno_t msg1;
errno_t msg2;
errno_t msg3;
errno_t msg4;
errno_t msg5;
//Dinami allocate mnimis
typedef struct DirectMapped {
					int Tag;
					int Blockoffset;
					int Index;
					int Valid;
			}DirectMapped;
			 DirectMapped *strDM;

typedef struct FullyAssociative {
					int Tag;
					int Blockoffset;
					int Valid;
			}FullyAssociative;
			 FullyAssociative *strFA;

typedef struct SetAssociative {
					int Tag;
					int Blockoffset;
					int Index;
					int Valid;
			}SetAssociative;
			SetAssociative *strSA;


int main(){
	int epi=3;
	double RAM2;
	double Cache2;
	double num_word2;
	double wordsAnablock2;
	double way2;
	int flash_num;
	int result;
    int i=1;
    int r;
    int n;
    char action[3];
    int diadiko;
    int c;
	int k;
    int counter_bits;
    int counter_tag;
    int counter_index;
	double counter_set;
    double counter_ram;
	double counter_blockoffset;
    int counter_le3eis;
    int lines=0;
    int character;
    int past_action;
    int m;
    int v;
    int answer;
    int flash;
	int flash2;
	int line2=1;
	char character1;
	char rampinakas[5];
	int i1=0;
	char cachepinakas[5];
	int i2=0;
	char num_wordpinakas[5];
	int i3=0;
	char wordAnaBlockpinakas[5];
	int i4=0;
	char waypinakas[5];
	int i5=0;
	char flash_numpinakas[5];
	int i6=0;
	char answerpinakas[2];
	int i7=0;
	int disable_flash=0;
	int x1=0;
	int x2=0;
	int x3=0;
	int x=-2;
	int y=0;
	int t=0;
	int a=0;
	

	int f=1;
	int b;
	int q;
	int w;
	int counter_tag_2;
	char PinakasBits[100000];
	int Pinakasint[100000];
	int Tag_Array[10000];
	char Index_Array[10000];
	int Bof_Array[10000];

	srand(time(NULL));
	msg1 =  fopen_s ( &output_file, "arxio.txt", "w+"); 
	msg4 = fopen_s (&output_file_3, "arxio3.txt", "r+");
	msg5 = fopen_s (&output_file_4, "arxio4.txt", "w+");

	//diavasma tou arxiou parametron
	 while((character1 = fgetc(output_file_3))!= EOF){
		 
		if (character1 == '\n') {
				line2=line2+1;
		}
				if (line2 == 2){
					rampinakas[i1]=character1;
					i1=i1+1;
				}
				if (line2 == 4){
					cachepinakas[i2]=character1;
					i2=i2+1;
				}
				if (line2 == 6){
					num_wordpinakas[i3]=character1;
					i3=i3+1;
				}
				if (line2 == 8){
					wordAnaBlockpinakas[i4]=character1;
					i4=i4+1;
				}
				if (line2 == 10){
					waypinakas[i5]=character1;
					i5=i5+1;
				}
				if (line2 == 12){
					flash_numpinakas[i6]=character1;
					i6=i6+1;
				}
				if (line2 == 14){
					answerpinakas[i7]=character1;
					i7=i7+1;
				}


	 }
   

	RAM2 = atoi(rampinakas);
	Cache2 = atoi(cachepinakas);
	num_word2=atoi(num_wordpinakas);
	wordsAnablock2=atoi(wordAnaBlockpinakas);
	way2=atoi(waypinakas);
	flash_num=atoi(flash_numpinakas);
	answer=atoi(answerpinakas);
	
	//periorismi
	if (RAM2<=Cache2) {printf("Edoses minimi Ram mikroteri h isi tis Cache \n"); 
						system("pause");
					   exit(0);}
	if (num_word2>RAM2) {printf("Edoses arithmon ton le3eon megalitero apo tin Ram \n");
						system("pause");
				        exit(0);}
	if (num_word2>Cache2) {printf("Edoses arithmon ton le3eon megalitero apo tin Cache \n");
							system("pause");
							exit(0);}

    result=epi*RAM2;
    
    printf("Nicholas Hadjigeorgiou - Marigoulla Chrysanthou\n");
    printf("*MILESTONE 2\n");
    printf("-----------------------------------------------\n");
  
	if(flash_num==0){
		disable_flash=1;
	}
	else{
	flash=result/flash_num;
	flash2=flash;
	}

    counter_bits=0;
	counter_le3eis= log(RAM2/num_word2)/log(2.0);

	//dimiourgia arxiou dedomenon
    fprintf(output_file,"RAM ADDRESS  |   ACTION   |      BINARY\n");
    fprintf(output_file,"-------------------------------------------\n");
    for(i=1;i<=result;i++){
                           
                           n= rand() % 3; 
						   r= rand() % (int)RAM2;

						   action[0]= 'w';
                           action[1]= 'r';
                           action[2]= 'm';

						   if((i==flash)&&(disable_flash==0)){
							   action[n]='f';
							   flash=flash+flash2;
						   }
                        
						   if(action[n]=='f'){
							   fprintf(output_file,"     %-14d %c           ",r, action[n]);
						   }
						   else
						   {
						   fprintf(output_file,"     %-14d %c           ",r, action[n]);
						   
				           for (c = counter_le3eis-1; c >= 0; c--)
                             {
                              k = r >> c;
                                 if (k & 1)
                                       fprintf(output_file,"1");
                                 else
                                       fprintf(output_file,"0");
                              }
						   }
                           fprintf(output_file,"\n");
                           
	}
    fclose(output_file);

	msg2 = fopen_s(&output_file_2, "arxio2.txt" , "w+");
    msg3 =  fopen_s(&input_file, "arxio.txt" , "r+");
    
	//gia tin arxitektoniki Direct Mapped
    if (answer==1){
                   
            fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |      BINARY\n");
            fprintf(output_file_2,"-------------|------------|    TAG     |   INDEX     |  BLOCKOFFSET\n");
            fprintf(output_file_2,"-------------|------------|------------|-------------|------------- \n");
                   
            printf("\nYou chose:\n");
            printf("\n------------------Direct Mapped--------------------\n\n");
            printf("File 1 has been generated!\n");
            printf("File 2 has been generated!\n"); 

			counter_le3eis= log(RAM2/num_word2)/log(2.0);
			counter_blockoffset=log(wordsAnablock2)/log(2.0);
			counter_set=(Cache2/num_word2/wordsAnablock2);
			counter_index=log(counter_set)/log(2.0);
			counter_tag=counter_le3eis-counter_blockoffset-counter_index;

			printf("Address Bits= %d \n", counter_le3eis);
			printf("Tag Bits= %d \n", counter_tag);
			printf("Block Bits = %1.0f \n", counter_blockoffset);
			printf("Index Bits= %d \n", counter_index);

			strDM = (DirectMapped*)malloc(Cache2*sizeof(DirectMapped));
			for(x1=0; x1<Cache2; x1++){
				strDM -> Valid=0; 
			}

            while((character = fgetc(input_file))!= EOF){
                    
                     if(character=='\n'){
                                         lines++;
                                         past_action=0;
                                         counter_bits=0;
										 
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
                                       
                                        past_action=1;}
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){
									   //PinakasBits[y] = atoi(character);
									   PinakasBits[y]= character;

                                            
                                              if (counter_bits==(counter_tag-1))
                                               {fprintf(output_file_2,"          ");}
                                                
                                              if (counter_bits==counter_index)
                                               {fprintf(output_file_2,"          ");}

                                        y++;

                                         counter_bits++;
                                         }
                                            
                                  } 
					  
                         }  
               }   

	for(y=0;y<(result*counter_le3eis);y++){
		if (PinakasBits[y] >= '0' && PinakasBits[y] <= '9')
           {
               Pinakasint[y] = PinakasBits[y] - '0';
            }
	}
	
	/*fprintf(output_file_4,"oles oi diefthinsis\n");
	for(y=0;y<(result*counter_le3eis);y++){
			fprintf(output_file_4,"%c   %d\n",PinakasBits[y], Pinakasint[y]);
	}*/
	
	b=result-1;

	for (x=((result*counter_le3eis)-1);x>=0;x--){
		 if(f<=counter_blockoffset){
			 
			 a=(Pinakasint[x]) * (pow((double)2,t)) + a;
		     t++;
		     if(f==counter_blockoffset){
			        x=x-(counter_index+counter_tag);
					t=0;
					a=0;
					Bof_Array[b]=a;
					b--;
			 }
			 f++;
		}
	}
	
    fprintf(output_file_4,"BOF\n");
	for(q=0;q<result;q++){
		fprintf(output_file_4,"%d  %d  %d\n",Bof_Array[q],q,result);
	}

	//gia tin arxitektoniki Fully Assosiative 
    if (answer==2){ 
                    fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |     BINARY\n");
                    fprintf(output_file_2,"-------------|------------| TAGS    | BLOCKOFFSET  \n");
                    fprintf(output_file_2,"-------------|------------| ----------|------------  \n");
                    
          printf("\nYou chose:\n");         
          printf("\n------------------Fully Assosiative-------------------\n\n"); 
          printf("File 1 has been generated!\n");
          printf("File 2 has been generated!\n");  

		  counter_le3eis= log(RAM2/num_word2)/log(2.0);
		  counter_blockoffset=log(wordsAnablock2)/log(2.0);
          counter_tag=counter_le3eis-counter_blockoffset;
		  printf("Address Bits= %d \n", counter_le3eis);
          printf("Tag Bits= %d \n", counter_tag);
		  printf("Block Bits = %1.0f \n", counter_blockoffset);
		
		strFA = (FullyAssociative*)malloc(Cache2*sizeof(FullyAssociative));
		for(x2=0; x2<Cache2; x2++){
		strFA -> Valid=0; 
		}
         while((character = fgetc(input_file))!= EOF){
                     
                     if(character=='\n'){
                                          lines++;
                                         past_action=0;
                                         counter_bits=0;
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
                                       
                                        past_action=1;}
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){
                                            
                                               if (counter_bits==(counter_tag-1))
                                               {fprintf(output_file_2,"      ");}
                                            
                                           
                                         counter_bits++;
                                         }
                                            
                                  }
                                     
                     
                                                                                                                                      
                       }              
             }             
  //gia tin arxitektoniki Set Assosiative
   if(answer==3){
                 fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |          BINARY\n");
                 fprintf(output_file_2,"-------------|------------|    TAG  |  INDEX |BLOCKOFFSET  \n");
                 fprintf(output_file_2,"-------------|------------|---------|--------|---------------\n");
                 
                    printf("\nYou chose:\n");
                    printf("\n------------------Set Assosiative-----------------\n\n");
                    printf("File 1 has been generated!\n");
                    printf("File 2 has been generated!\n"); 

					counter_le3eis= log(RAM2/num_word2)/log(2.0);
		            counter_blockoffset=log(wordsAnablock2)/log(2.0);
                    
					counter_index=log(Cache2/num_word2/way2)/log(2.0)-log(counter_blockoffset)/log(2.0);
                    counter_tag=counter_le3eis-counter_blockoffset-counter_index;
					printf("Address Bits= %d \n", counter_le3eis);
                    printf("Tag Bits= %d \n", counter_tag);
		            printf("Block Bits = %1.0f \n", counter_blockoffset);
		            printf("Index Bits= %d \n", counter_index);

					
					strSA = (SetAssociative*)malloc(Cache2*sizeof(SetAssociative));
					for(x3=0; x3<Cache2; x3++){
							strSA -> Valid=0; 
					}

                  while((character = fgetc(input_file))!= EOF){
                     
                     if(character=='\n'){
                                          lines++;
                                         past_action=0;
                                         counter_bits=0;
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
                                       
                                        past_action=1;}
								  
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){

									 
									 
									  
                                              if (counter_bits==(counter_tag-1))

											   {   fprintf(output_file_2,"     ");}
                                               
                                              if (counter_bits==(counter_tag+counter_index-1))
                                               {fprintf(output_file_2,"          ");}

                                   
                                         counter_bits++;
                                         }
					  }     
								                                                                                                             
                }  
   }
  
	//klisimo arxion		
   fclose(input_file);
   fclose(output_file_2);
   fclose(output_file_3);
   fclose(output_file_4);
   printf("Press Enter To Exit...");
   getchar();
   return(0);
}

