#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>


#define epi 3   
#define CRT_SECURE_NO_WARNINGS

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

struct node{
  int tag;
  int index;
  int valid;
  int bof[100];
  int touch;
  int metritis_fifo;
  struct node *next;
};

int main(){
	double RAM2;
	double Cache2;
	double num_word2;
	double wordsAnablock2;
	double way2;
	int way2b;
	int flash_num;
	int result;
	float result2;
    int i=1;
    int r;
    int n;
    char action[3];
    int c;
	int k;
    int counter_bits;
    int counter_tag;
    int counter_index;
	double counter_set;
	double counter_blockoffset;
    int counter_le3eis;
	int counter_cache;
    int lines=0;
    int character;
    int past_action;
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
	int i8=0;
	int i9=0;
	int i10=0;
	int i11=0;
	int i12=0;
	int i13=0;
	int i14=0;
	int disable_flash=0;
	int x1=0;
	int x2=0;
	int x3=0;
	int x=-2;
	int y=0;
	int t=0;
	int a=0;
	int tagdec;
	int indexdec;
	int bofdec;
	int binary[15];
	int f=0;
	int w;
	int z;
	int actionw=0;
	int actionr=0;
	int actionm=0;
	int actionf=0;
	int lastflash=0;
	int hits_num=0;
	int miss_num=0;
	int tmp;
	int kikloi;
	int total_kikloi=0;
	char wallocate[2];
	char nwallocate[2];
	char wback[2];
	char wthrough[2];
	char wcache[1000];
	char wram[1000];
	char epilogi[2];
	int wback2;
	int wthrough2;
	int wcache2;
	int wram2;
	int wallocate2;
	int nwallocate2;
	int epilogi2;
	int metritis_fully=0;
	int taken=0;
	int j;
	int virtual_index;
	int ar_rand;
	int metritis_fifo=0;
	int clock=0;
	int voithitiki;
	double hitrate=0;
	double missrate=0;
	int  flash_counter=0;
	char PinakasVictim[20];
	int victim;
	int i15=0;
	int counter_blockoffset2;
	int victimhits=0;
	char PinakasBima[5];
	char PinakasMaxCache[5];
	int i16=0;
	int i17=0;
	int bima=0; 
	int maxcache=0;
	int victimmisses=0;
	int victimcounter=0;
	int vtaken=0;

	struct node *victimroot ;       
	struct node *victim_conductor ; 
	struct node *elegxos_victim;

	srand(time(NULL));
	msg1 =  fopen_s ( &output_file, "arxio.txt", "w+"); 
	msg4 = fopen_s (&output_file_3, "arxio3.txt", "r+");
	msg5 = fopen_s (&output_file_4, "arxio4.txt", "w+");
	
	 while((character1 = fgetc(output_file_3))!= EOF){
		 
		if (character1 == '\n')
		{
			line2=line2+1;
		}
		if (line2 == 2)
		{
			rampinakas[i1]=character1;
			i1=i1+1;
		}
		if (line2 == 4)
		{
			cachepinakas[i2]=character1;
			i2=i2+1;
		}
		if (line2 == 6)
		{
			num_wordpinakas[i3]=character1;
			i3=i3+1;
		}
		if (line2 == 8)
		{
			wordAnaBlockpinakas[i4]=character1;
			i4=i4+1;
		}
		if (line2 == 10)
		{
			waypinakas[i5]=character1;
			i5=i5+1;
		}
		if (line2 == 12)
		{
			flash_numpinakas[i6]=character1;
			i6=i6+1;
		}
		if (line2 == 14)
		{
			answerpinakas[i7]=character1;
			i7=i7+1;
		}
		if (line2==16)
		{
			wallocate[i8]=character1;
			i8++;
		}
		if (line2==18)
		{
			nwallocate[i9]=character1;
			i9++;
		}
		if (line2==20)
		{
			wback[i10]=character1;
		    i10++;
		}
		if (line2==22)
		{
			wthrough[i11]=character1;
			i11++;
		}
		if (line2==24)
		{
			wcache[i12]=character1;
			i12++;
		}
		if (line2==26)
		{
			wram[i13]=character1;
			i13++;
		}
		if(line2==28)
		{
			epilogi[i14]=character1;
			i14++;
		}
		if(line2==30)
		{
			PinakasVictim[i15]=character1;
			i15++;
		}

		if(line2==32)
		{
			PinakasBima[i16]=character1;
			i16++;
		}
		if (line2==34)
		{
			PinakasMaxCache[i17]=character1;
			i17++;

		}
	 }
   
	RAM2 = atoi(rampinakas);
	printf("RAM %4.2f\n", RAM2);
	Cache2 = atoi(cachepinakas);
	printf("Cache %4.2f\n", Cache2);
	num_word2=atoi(num_wordpinakas);
	printf("Num_word %4.2f\n", num_word2);
	wordsAnablock2=atoi(wordAnaBlockpinakas);
	printf("WordAnaBlock %4.2f\n",wordsAnablock2 );
	way2=atoi(waypinakas);
	way2b=way2;
	printf("Way %4.2f\n",way2 );
	flash_num=atoi(flash_numpinakas);
	printf("Flash num %d\n", flash_num);
	answer=atoi(answerpinakas);
	printf("Idos Arxitektonikis: %d\n", answer);
	wback2=atoi(wback);
	printf("Write back: %d\n", wback2);
	wthrough2=atoi(wthrough);
	printf("Write through: %d\n", wthrough2);
	wallocate2=atoi(wallocate);
	printf("Write allocate: %d\n", wallocate2);
	nwallocate2=atoi(nwallocate);
	printf("No Write allocate: %d\n", nwallocate2);
	wcache2=atoi(wcache);
	printf("Write cache: %d\n", wcache2);
	wram2=atoi(wram);
	printf("Write ram: %d\n", wram2);
	epilogi2=atoi(epilogi);
	printf("Politikes Ekdio3eis: %d\n", epilogi2);
	victim=atoi(PinakasVictim);
	printf("Victim %d\n",victim );
	bima=atoi(PinakasBima);
	printf("Bima %d\n",bima );
	maxcache=atoi(PinakasMaxCache);
	printf("Max Cache %d\n",maxcache );

	
			victimroot = malloc( sizeof(struct node) );  
	        victimroot->next = 0;  
			victimroot->index = 0;
			victim_conductor = victimroot;
			victim_conductor->valid=0;

			if ( victim_conductor != 0 )
			{
				while ( victim_conductor->next != 0)
				{
					victim_conductor = victim_conductor->next;
				}
			}

			for(i=1;i<victim;i++)
			{
				victim_conductor->next = malloc( sizeof(struct node) );  
				victim_conductor = victim_conductor->next;
				if ( victim_conductor == 0 )
				{
					printf( "Out of memory" );
					return 0;
				} 
				victim_conductor->next = 0;         
				victim_conductor->index = i;
				victim_conductor->valid=0;
				for (k=0;k<50;k++)
				{
					victim_conductor->bof[k]=0;
				}
			}

			victim_conductor=victimroot;
			
	if (RAM2<=Cache2) {printf("Edoses minimi Ram mikroteri h isi tis Cache \n"); 
						system("pause");
					   exit(0);}
	if (num_word2>RAM2) {printf("Edoses arithmon ton le3eon megalitero apo tin Ram \n");
						system("pause");
				        exit(0);}
	if (num_word2>Cache2) {printf("Edoses arithmon ton le3eon megalitero apo tin Cache \n");
							system("pause");
							exit(0);}

    result2=epi*RAM2/num_word2;
	result=result2;
    
    
    printf("-----------------------------------------------\n");
    printf("Nicholas Hadjigeorgiou - Marigoulla Chrysanthou\n");
    printf("*MILESTONE 3\n");
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
							   flash_counter++;
						   }
                           if((i==result)&&(action[n]=='f')){
							   lastflash=1;
						   }
						   if(action[n]=='f'){
							   fprintf(output_file,"     %-14d %c           ",r, action[n]);
						   }
						   else
						   {
						   fprintf(output_file,"     %-14d %c           ",r, action[n]);   
						   
				           for (c = counter_le3eis-1; c >= 0; c--)   //counter le3eis = ta bits tis ram (address bits)
                             {
                              k = r >> c;
                                 if (k & 1){
                                       fprintf(output_file,"1");
								        }
                                 else  {
                                       fprintf(output_file,"0");
									    }
                              }
						   }
                           fprintf(output_file,"\n");
                           
}
	
    fclose(output_file);

	msg2 = fopen_s(&output_file_2, "arxio2.txt" , "w+");
    msg3 =  fopen_s(&input_file, "arxio.txt" , "r+");
    
if(answer==1){
 fprintf(output_file_4,"TAG |   INDEX   |    BOF    |    ACTION     |   HIT/MISS    |  TYPE OF MISS  | CYCLES | REPLACED\n");
} 
if(answer==2){
	fprintf(output_file_4,"TAG  |    BOF    |   ACTION   |   HIT/MISS    |  TYPE OF MISS  |   CYCLES   | REPLACED\n");
}
if(answer==3){
	fprintf(output_file_4,"TAG |   INDEX   |  BOF  |    ACTION    |   HIT/MISS    |  TYPE OF MISS  |  CYCLES  | REPLACED\n");
}
            

	victim_conductor=victimroot;
	/////////
	 while ((answer==1)&&(Cache2<=maxcache)){
		
            struct node *root ;       
			struct node *conductor ; 
			root = malloc( sizeof(struct node) );  
	        root->next = 0;  
			root->index = 0;
			conductor = root;
			conductor->valid=0;

			if ( conductor != 0 )
			{
				while ( conductor->next != 0)
				{
					conductor = conductor->next;
				}
			}
			for(i=1;i<=(Cache2/num_word2/wordsAnablock2);i++)
			{
				  
				conductor->next = malloc( sizeof(struct node) );  
				conductor = conductor->next;
				if ( conductor == 0 )
				{
					printf( "Out of memory" );
					return 0;
				}
				 
				conductor->next = 0;         
				conductor->index = i;
				conductor->valid=0;
				for (j=0;j<100;j++)
				{
					conductor->bof[j]=0;
				}
			}
					victimcounter=0;victimmisses=0;vtaken=0;
                   
           fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |      BINARY\n");
           fprintf(output_file_2,"-------------|------------|    TAG     |   INDEX     |  BLOCKOFFSET\n");
           fprintf(output_file_2,"-------------|------------|------------|-------------|------------- \n");
                   
            printf("\nYou chose:\n");
            printf("\n------------------Direct Mapped--------------------\n\n");
             

			counter_le3eis= log(RAM2/num_word2)/log(2.0);
			counter_blockoffset=log(wordsAnablock2)/log(2.0);
			counter_set=(Cache2/num_word2/wordsAnablock2);
			counter_index=log(counter_set)/log(2.0);
			counter_tag=counter_le3eis-counter_blockoffset-counter_index;

			printf("Address Bits= %d \n", counter_le3eis);
			printf("Tag Bits= %d \n", counter_tag);
			printf("Block Bits = %4.2f \n", counter_blockoffset);
			counter_blockoffset2=counter_blockoffset;
			printf("Index Bits= %d \n", counter_index);

            while((character = fgetc(input_file))!= EOF){
                    
                     if(character=='\n'){
                                         lines++;
                                         past_action=0;
                                         counter_bits=0;
										 
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
                                        if(character=='w'){
											actionw=1;}
										if(character=='r'){
											actionr=1;}
										if(character=='m'){
											actionm=1;}
										if(character=='f'){
											actionf=1;}
                                        past_action=1;}
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){
									          if(character=='0'){
												  binary[f]=0;
												  f++;
											  }
											  if(character=='1'){
												  binary[f]=1;
												  f++;
											  }                                     
                                              if (counter_bits==(counter_tag-1))
                                               {fprintf(output_file_2,"          ");}
                                                
                                              if (counter_bits==counter_index)
                                               {fprintf(output_file_2,"          ");}

                                       

                                         counter_bits++;
										 
                                         }
                                            
                                  } 
					  if(f==counter_le3eis){
						  f=0;
						   if(actionf==1){
								  conductor = root;
								   if ( conductor != 0 ) 
									{ 
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (k=0;k<50;k++)
														{
															conductor->bof[k]=0;
														}
													conductor=conductor->next;
												}
									}
								  fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
								  
							  }	 
						  for(w=0; w<counter_le3eis;w++){
							 
							  fprintf(output_file_4,"%d", binary[w]);
							  if(w==counter_tag-1){
								  tagdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=0;z<=w;z++){
									  tagdec=(tagdec << 1)+binary[z];
								  }
								  fprintf(output_file_4,"   ");
							  }

							  if(w==counter_tag+counter_index-1){
								  indexdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=counter_tag;z<=w;z++){
									  indexdec=(indexdec << 1)+binary[z];
								  }
								   fprintf(output_file_4,"     ");
							  }

							  if(w==counter_tag+counter_index+counter_blockoffset2-1){
								  bofdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=counter_tag+counter_index;z<=w;z++){
									  bofdec=(bofdec << 1)+binary[z];
								  }
								  
								  
								   if(actionw==1){
								  fprintf(output_file_4,"\t   w");
								 
							  }

							  if(actionm==1){
								  fprintf(output_file_4,"\t   m");
								  
							  }
							  if(actionr==1){
								  fprintf(output_file_4,"\t   r");
								  
							  }
							  
				}
						  
	}
						 
					      conductor = root;
						  
						  if ((conductor != 0))  
						      {
								  
			                   	while ( conductor->next != 0 ){
									if (conductor->index==indexdec){
										if ((conductor->tag==tagdec)&&(conductor->valid==1)){
											if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}
											
											fprintf(output_file_4,"\t           HIT\t\t--\t         %d\t  --\n",kikloi);
											hits_num++;
											total_kikloi=total_kikloi+kikloi;
											conductor->valid=1;
							                conductor->tag=tagdec;
							                conductor->bof[bofdec]=1;
										}
							else if((conductor->valid==1)&&(conductor->tag==tagdec)&&(conductor->bof[bofdec]==0)){
								

								if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
								if (actionr == 1){

												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
							
								total_kikloi=total_kikloi+kikloi;
								miss_num++;
								fprintf(output_file_4,"\t           MISS\t       COMPULSORY\t%d\t  --\n",kikloi);
								conductor->valid=1;
								conductor->tag=tagdec;
								conductor->bof[bofdec]=1;
							}
						else if((conductor->valid==1)&&(conductor->tag==tagdec)&&(conductor->bof[bofdec]==1)){
							
							if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}

							total_kikloi=total_kikloi+kikloi;
							hits_num++;
							
							fprintf(output_file_4,"\t           HIT\t\t--\t          %d\t  --\n",kikloi);
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
						}
						
						else if((conductor->tag!=tagdec)&&(conductor->valid==1)){
							
							if((actionm==1)||(actionw==1)){
								
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
							total_kikloi=total_kikloi+kikloi;
							miss_num++;
							fprintf(output_file_4,"\t           MISS\t       CONFLICT\t         %d\t  %d\n",kikloi,conductor->tag);

							elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							if (vtaken==0)
								victimmisses++;
							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;

						}
						
						if(conductor->valid==0){
						if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
							total_kikloi=total_kikloi+kikloi;
							miss_num++;
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							fprintf(output_file_4,"\t           MISS\t       COMPULSORY\t %d\t  --\n",kikloi);
						}
						kikloi=0;
					}
					conductor=conductor->next;
					}
				}
				
				
						  actionw=0;
	                      actionr=0;
	                      actionm=0;
	                      actionf=0;
					  }
			   } 
         if(lastflash==1){
			 conductor = root;
								  if ( conductor!= 0 ) 
									{ 
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (j=0;j<100;j++)
														{
															conductor->bof[j]=0;
														}
													conductor=conductor->next;
												}
									}
			 fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		 }
        
	conductor=root;
	
	hitrate=hits_num/(result2 - flash_counter)*100;
	missrate=miss_num/(result2- flash_counter)*100;
	printf("Victim Hits: %d\n", victimhits);
	printf("Hits Number: %d\n", hits_num);
	printf("Hit Rate is: %4.2f\n",hitrate);
	printf("Miss Rate is: %4.2f\n",missrate);
	printf("Total Number of Cycles are: %d\n",total_kikloi);
   while(conductor->next!=0)
	{
		tmp=conductor;
		conductor=conductor->next;
		free(tmp);
	}
   Cache2=Cache2+bima;
}
  victim_conductor=victimroot;
  //////////
  while( (answer==2)&&(Cache2<=maxcache)){ 
		
            struct node *root ;        
			struct node *conductor ; 
			root = malloc( sizeof(struct node) );  
	        root->next = 0;  
			root->index = 0;
			conductor = root;
			conductor->valid=0;
			conductor->touch=5000;

			if ( conductor != 0 )
			{
				while ( conductor->next != 0)
				{
					conductor = conductor->next;
				}
			}
			for(i=1;i<=(Cache2/num_word2/wordsAnablock2);i++)
			{
				  
				conductor->next = malloc( sizeof(struct node) );  
				conductor = conductor->next;
				if ( conductor == 0 )
				{
					printf( "Out of memory" );
					return 0;
				}
				 
				conductor->next = 0;         
				conductor->index = i;
				conductor->valid=0;
				conductor->touch=5000;
				for (j=0;j<100;j++)
				{
					conductor->bof[j]=0;
				}
			}
				  victimcounter=0;victimhits=0;victimmisses=0;
                   
                    fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |     BINARY\n");
                    fprintf(output_file_2,"-------------|------------| TAGS    | BLOCKOFFSET  \n");
                    fprintf(output_file_2,"-------------|------------| ----------|------------  \n");
                    
          printf("\nYou chose:\n");         
          printf("\n------------------Fully Assosiative-------------------\n\n"); 
          

		  counter_le3eis= log(RAM2/num_word2)/log(2.0);
		  counter_blockoffset=log(wordsAnablock2)/log(2.0);
          counter_tag=counter_le3eis-counter_blockoffset;
		  counter_cache=log(Cache2)/log(2.0);
		  printf("Address Bits= %d \n", counter_le3eis);
          printf("Tag Bits= %d \n", counter_tag);
		  printf("Block Bits = %4.2f \n", counter_blockoffset);

		
		 
		
         while((character = fgetc(input_file))!= EOF){
                     
                     if(character=='\n'){
                                          lines++;
                                         past_action=0;
                                         counter_bits=0;
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
									  if(character=='w'){
											actionw=1;}
										if(character=='r'){
											actionr=1;}
										if(character=='m'){
											actionm=1;}
										if(character=='f'){
											actionf=1;}                                       
                                        past_action=1;}
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){
                                              if(character=='0'){
												  binary[f]=0;
												  f++;
											   }
											  if(character=='1'){
												  binary[f]=1;
												  f++;
											   }
                                               if (counter_bits==(counter_tag-1))
                                               {fprintf(output_file_2,"      ");}
                                            
                                           
                                         counter_bits++;
                                         }
                                            
                                  }
                           if(f==counter_le3eis){
						   f=0;
						   if(actionf==1){
								  conductor = root;
								  if ( conductor != 0 ) 
									{  
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (j=0;j<100;j++)
														{
															conductor->bof[j]=0;
														}
													conductor=conductor->next;
												}
									}
								  fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
							  }           
                       for(w=0; w<counter_le3eis;w++){
							  
							  fprintf(output_file_4,"%d", binary[w]);
							  if(w==counter_tag-1){
								  tagdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=0;z<=w;z++){
									  tagdec=(tagdec << 1)+binary[z];
								  }
								  fprintf(output_file_4,"   ");
							  }

							  if(w==counter_tag+counter_blockoffset-1){
								  bofdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=counter_tag;z<=w;z++){
									  bofdec=(bofdec << 1)+binary[z];
								  }
								  
							  
								   if(actionw==1){
								  fprintf(output_file_4,"\tw");
								 
							  }

							  if(actionm==1){
								  fprintf(output_file_4,"\tm");
								
							  }
							  if(actionr==1){
								  fprintf(output_file_4,"\tr");
								  
							  }
							  
							  }
						  
						  }

					    conductor = root;
						metritis_fully=0;
						taken=0;
						kikloi=0;
						  
						  if ((conductor != 0))  
						      {
								  
			                   	while ( conductor->next != 0 ){

									if (conductor->valid==0 && taken==0){

										
											if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
											
									fprintf(output_file_4,"\t     MISS\t   COMPULSORY\t      %d\t--\n",kikloi);
									taken=1;
									conductor->valid=1;
									conductor->tag=tagdec;
									conductor->bof[bofdec]=1;
									total_kikloi=total_kikloi+kikloi;
									miss_num++;
									conductor->touch=clock;
							}
						else if((conductor->valid==1)&&(conductor->tag==tagdec)&&(conductor->bof[bofdec]==1) && (taken==0)){
								
								if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}
							fprintf(output_file_4,"\t     HIT\t\t--\t      %d\t--\n",kikloi);
							taken=1;
							total_kikloi=total_kikloi+kikloi;
							hits_num++;
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							conductor->touch=clock;
							}
						else if((conductor->valid==1)&&(conductor->tag==tagdec)&&(conductor->bof[bofdec]==0) && (taken==0)){
								
								if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi =wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
								total_kikloi=total_kikloi+kikloi;
								taken=1;
								miss_num++;
								fprintf(output_file_4,"\t     MISS\t   COMPULSORY\t      %d\t--\n",kikloi);
								conductor->valid=1;
								conductor->tag=tagdec;
								conductor->bof[bofdec]=1;
								conductor->touch=clock;
						}
						else if((conductor->valid==1)&&(conductor->tag==tagdec)&&(taken==0)){
							
							if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}

							total_kikloi=total_kikloi+kikloi;
							hits_num++;
							taken=1;
							fprintf(output_file_4,"\t     HIT\t\t--\t      %d\t--\n",kikloi);
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							conductor->touch=clock;
						}
						clock++;
						metritis_fully++;
						conductor= conductor->next;

						
                                                                                                                                      
                       }              
             }      
			 if((epilogi2==1)&&(taken==0)){					//RANDOM
				 virtual_index=counter_cache;
				 ar_rand=rand()% virtual_index+0;
				 conductor=root;
				 if(conductor!=0){
					 while(conductor!=0){
						 if((taken==0)&&(conductor->index==ar_rand)){
							 if((actionm==1)||(actionw==1)){
										       if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
												   kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
													kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
								if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
								conductor->valid=1;
								for(j=0;j<100;j++){
									conductor->bof[j]=0;
								}
								conductor->bof[bofdec]=1;
								fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);
								miss_num++;
								conductor->tag=tagdec;
								conductor->bof[bofdec]=1;
								total_kikloi=total_kikloi+kikloi;
								taken=1;
							elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;

						 }//if
						 conductor=conductor->next;
					 }//while
				 }//ifconductor!=0
			 }//random

		if((epilogi2==2)&&(taken==0)){	//FIFO
			kikloi=0;
			metritis_fifo=0;
			conductor=root;
			if(conductor!=0){
				while(conductor!=0){
					if((taken==0)&&(conductor->index==metritis_fifo)){
						            if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
											kikloi = wcache2+wram2+wcache2;
									}
									if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
											kikloi = wcache2+wram2;
									}
									if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
											kikloi = wcache2+wram2+wcache2;
									}
									if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
											kikloi = wcache2+wram2+wcache2;
									}
						
					conductor->valid=1;
					for(j=0;j<100;j++){
						conductor->bof[j]=0;
					}
					conductor->bof[bofdec]=1;
					fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);
					miss_num++;
					conductor->tag=tagdec;
					taken=1;
					total_kikloi=total_kikloi+kikloi;
					metritis_fifo++;
					elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
				}
				conductor=conductor->next;
			}
		}
			if(metritis_fifo==(Cache2/num_word2/wordsAnablock2)){
				metritis_fifo=0;
			}
		
 }//porta e3odu fifo

	if((epilogi2==3)&&(taken==0)){     
		//LRU
		for(metritis_fully=0;metritis_fully<=clock;metritis_fully++){
			conductor=root;
			if(conductor!=0){
				while(conductor!=0){
					if((taken==0)&&(conductor->touch==metritis_fully)){
						            if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
											kikloi = wcache2+wram2+wcache2;
									}
									if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
											kikloi = wcache2+wram2;
									}
									if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
											kikloi = wcache2+wram2+wcache2;
									}
									if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
											kikloi = wcache2+wram2+wcache2;
									}

									conductor->valid=1;
									for(j=0;j<100;j++){
										conductor->bof[j]=0;
									}
									conductor->bof[bofdec]=1;
									conductor->touch=clock;
									fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);

									miss_num++;
									conductor->tag=tagdec;
									total_kikloi=total_kikloi+kikloi;
									taken=1;
									elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
					}
					conductor=conductor->next;
				}
			}
		}

	}//porta e3odu LRU
	                      actionw=0;
	                      actionr=0;
	                      actionm=0;
	                      actionf=0;}  //if    
	 }//while
	 if(lastflash==1){
			 conductor = root;
								  if ( conductor!= 0 ) 
									{ // Makes sure there is a place to start 
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (j=0;j<100;j++)
														{
															conductor->bof[j]=0;
														}
													conductor=conductor->next;
												}
									}
			 fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		 }
	 conductor=root;
	hitrate=hits_num/(result2 - flash_counter)*100;
	missrate=miss_num/(result2- flash_counter)*100;
	printf("Victim Hits: %d\n", victimhits);
	printf("Hit Rate is: %4.2f\n",hitrate);
	printf("Miss Rate is: %4.2f\n",missrate);
	printf("Total Number of Cycles are: %d\n",total_kikloi);
   while(conductor->next!=0)
	{
		tmp=conductor;
		conductor=conductor->next;
		free(tmp);
	}
   Cache2=Cache2+bima;
  }//answer
  victim_conductor=victimroot;

   while((answer==3)&&(Cache2<=maxcache)){
	    
					// This won't change, or we would lose the list in memory 
            struct node *root ;       
			// This will point to each node as it traverses the list 
			struct node *conductor ; 
			root = malloc( sizeof(struct node) );  
	        root->next = 0;  
			root->index = 0;
			conductor = root;
			conductor->valid=0;
			conductor->touch=5000;
			conductor->metritis_fifo=0;

			if ( conductor != 0 )
			{
				while ( conductor->next != 0)
				{
					conductor = conductor->next;
				}
			}
			for(i=1;i<(way2b);i++)
			{
				 //Creates a node at the end of the list 
				conductor->next = malloc( sizeof(struct node) );  
				conductor = conductor->next;
				if ( conductor == 0 )
				{
					printf( "Out of memory" );
					return 0;
				}
				// initialize the new memory 
				conductor->next = 0;         
				conductor->index = 0;
				conductor->valid=0;
				conductor->touch=5000;
				conductor->metritis_fifo=0;
				for (j=0;j<100;j++)
				{
					conductor->bof[j]=0;
				}
			}
			for(i=1;i<=(Cache2/num_word2/num_word2/wordsAnablock2); i++)
			{
				/* Creates a node at the end of the list */
				conductor->next = malloc( sizeof(struct node) );  
				conductor = conductor->next;
				if ( conductor == 0 )
				{
					printf( "Out of memory" );
					return 0;
				}
				/* initialize the new memory */
				conductor->next = 0;
				conductor->touch=10000;
				conductor->index = i;
				conductor->valid=0;
				conductor->metritis_fifo=0;
				for (j=0;j<100;j++)
				{
					conductor->bof[j]=0;
				}
				for (k=1;k<way2b;k++)
				{
					conductor->next = malloc( sizeof(struct node) );  
					conductor = conductor->next;
					if ( conductor == 0 )
					{
						printf( "Out of memory" );
						return 0;
					}
					/* initialize the new memory */
					conductor->next = 0;         
					conductor->index = i;
					conductor->touch=10000;
					conductor->valid=0;
					conductor->metritis_fifo=0;
					for (j=0;j<100;j++)
					{
						conductor->bof[j]=0;
					}				
				}

			}

			 victimcounter=0;victimhits=0;victimmisses=0;
			fprintf(output_file_2,"RAM ADDRESS  |   ACTION   |          BINARY\n");
            fprintf(output_file_2,"-------------|------------|    TAG  |  INDEX |BLOCKOFFSET  \n");
            fprintf(output_file_2,"-------------|------------|---------|--------|---------------\n");
                 
                    printf("\nYou chose:\n");
                    printf("\n------------------Set Assosiative-----------------\n\n");
                    

					counter_le3eis= log(RAM2/num_word2)/log(2.0);
		            counter_blockoffset=log(wordsAnablock2)/log(2.0);
                    
					counter_index=log(Cache2/num_word2/way2b/wordsAnablock2)/log(2.0);
                    counter_tag=counter_le3eis-counter_blockoffset-counter_index;
					//printf("
					printf("Address Bits= %d \n", counter_le3eis);
                    printf("Tag Bits= %d \n", counter_tag);
		            printf("Block Bits = %4.2f \n", counter_blockoffset);
		            printf("Index Bits= %d \n", counter_index);

				//fprintf(output_file_4,"\n------------------------------------------\n");	
					

                  while((character = fgetc(input_file))!= EOF){
                     
                     if(character=='\n'){
                                          lines++;
                                         past_action=0;
                                         counter_bits=0;
                                         }
                     
                      if(lines>1){
                                  fprintf(output_file_2,"%c",character);
                                  if((character=='w')||(character=='r')||(character=='m')||(character=='f')){
									  if(character=='w'){
											 actionw=1;}
										if(character=='r'){
											actionr=1;}
										if(character=='m'){
											actionm=1;}
										if(character=='f'){
											actionf=1;}
                                       
                                        past_action=1;}
								  
                                        
                                  if(((character=='0')||(character=='1'))&&(past_action==1)){
									  		  if(character=='0'){
												  binary[f]=0;
												  f++;
											   }
											  if(character=='1'){
												  binary[f]=1;
												  f++;
											   }
				  
                                              if (counter_bits==(counter_tag-1))

											   {   fprintf(output_file_2,"     ");}
                                               
                                              if (counter_bits==(counter_tag+counter_index-1))
                                               {fprintf(output_file_2,"          ");}

                                   
                                         counter_bits++;
                                         }
					  }
					   if(f==counter_le3eis){
						   f=0;
						   if(actionf==1){
								  conductor = root;
								  if ( conductor != 0 ) 
									{ // Makes sure there is a place to start 
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (j=0;j<100;j++)
														{
															conductor->bof[j]=0;
														}
													conductor=conductor->next;
												}
									}
								  fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
							  }
						    for(w=0; w<counter_le3eis;w++){
							  /*if(actionf==1){
								    break;}*/

							  fprintf(output_file_4,"%d", binary[w]);
							  if(w==counter_tag-1){
								  tagdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=0;z<=w;z++){
									  tagdec=(tagdec << 1)+binary[z];
								  }
								  
								  fprintf(output_file_4,"   ");
							  }

							  if(w==counter_tag+counter_index-1){
								  indexdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=counter_tag;z<=w;z++){
									  indexdec=(indexdec << 1)+binary[z];
								  }
								  
								  fprintf(output_file_4,"   ");
							  }

							  if(w==counter_tag+counter_index+counter_blockoffset-1){
								  bofdec=0;
								  fprintf(output_file_4,"     ");
								  for(z=counter_tag+counter_index;z<=w;z++){
									  bofdec=(bofdec << 1)+binary[z];
								  }
								  
								  //fprintf(output_file_4,"\n");
							  
								   if(actionw==1){
								  fprintf(output_file_4,"\tw");
								 // fprintf(output_file_4,"\n");
							  }
                           if(actionm==1){
								  fprintf(output_file_4,"\tm");
								  //fprintf(output_file_4,"\n");
							  }
							  if(actionr==1){
								  fprintf(output_file_4,"\tr");
								  //fprintf(output_file_4,"\n");
							  }
							  
							  }
						  
						  }//for
                         conductor=root;
						 taken=0;
						 if((conductor!=0)){
							 while(conductor->next!=0){
								 if(conductor->index==indexdec){
									 if((taken==0)&&(conductor->valid==1)&&(conductor->tag==tagdec)){
										      if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}
											
											fprintf(output_file_4,"\t     HIT\t\t--\t      %d\t--\n",kikloi); 
											hits_num++;
											total_kikloi=total_kikloi+kikloi;
											conductor->valid=1;
							                conductor->tag=tagdec;
							                conductor->bof[bofdec]=1;
											conductor->touch=clock;
											taken=1;
											

										}
									 else if((taken==0)&&(conductor->valid==1)&&(conductor->bof[bofdec]==0)&&(conductor->tag==tagdec)){
										 
                                            if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
					
									total_kikloi=total_kikloi+kikloi;
								    taken=1;
								    miss_num++;
								    fprintf(output_file_4,"\t     MISS\t   COMPULSORY2\t      %d\t--\n",kikloi);/////////////////////////////////////////////////
								    conductor->valid=1;
								    conductor->tag=tagdec;
								    conductor->bof[bofdec]=1;
								    conductor->touch=clock;
									
									 }//if tetraplo
									 
									 else if((taken==0)&&(conductor->tag==tagdec)&&(conductor->valid==1)&&(conductor->bof[bofdec]==1)){
										  if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2;
														}
											}
											total_kikloi=total_kikloi+kikloi;
											hits_num++;
											taken=1;
											fprintf(output_file_4,"\t     HIT\t\t--\t      %d\t--\n",kikloi);
											conductor->valid=1;
											conductor->tag=tagdec;
											conductor->bof[bofdec]=1;
											conductor->touch=clock;
											
											

									 }//iftetraplo
									 else if((taken==0)&&(conductor->valid==0)){
										 if((actionm == 1)||(actionw == 1)){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												}
											if (actionr == 1){
												if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
											}
									total_kikloi=total_kikloi+kikloi;
								    taken=1;
								    miss_num++;
								    fprintf(output_file_4,"\t     MISS\t   COMPULSORY\t      %d\t--\n",kikloi);
								    conductor->valid=1;
								    conductor->tag=tagdec;
								    conductor->bof[bofdec]=1;
								    conductor->touch=clock;
								   }//ifdiplo
								 kikloi=0;
							    }
							conductor=conductor->next;
							clock++;
						   }//while
					  }//ifconductor

                   if((epilogi2==1)&&(taken==0)){///randommmmmm
					   
					   ar_rand=rand()% way2b+0;
					   kikloi=0;
					   voithitiki=0;
					   conductor=root;
					   if((conductor!=0)){
						   while(conductor!=0){
							   if((taken==0)&&(voithitiki==ar_rand)&&(conductor->index==indexdec)){
								   conductor->valid=1;
								   for(j=0;j<100;j++){
									   conductor->bof[j]=0;
								   }
								                if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
												if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
												elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							
									conductor->bof[bofdec]=1;
									
									fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);

									miss_num++;
									conductor->tag=tagdec;
									total_kikloi=total_kikloi+kikloi;
									taken=1;
									metritis_fifo++;

							   }//iftriplo
							   if((taken==0)&&(voithitiki!= ar_rand)&&(conductor->index==indexdec)){
								   voithitiki++;
							   }//if triplo
							   conductor=conductor->next;
						   }//whilecon!=0
					   }//ifcfonductor
                     
					   if(metritis_fifo==way2b){
						   metritis_fifo=0;
					   }
                }//random
         
		 if((epilogi2==2)&&(taken==0)){//fifooooo
			 voithitiki=0;
			 kikloi=0;
			 conductor=root;
			 if(conductor!=0){
				 while(conductor!=0){
					 if((taken==0)&&(conductor->index==indexdec)){
						 if(voithitiki==conductor->metritis_fifo){
							 conductor->valid=1;
							 for(j=0;j<100;j++){
								 conductor->bof[j]=0;
							 }
							 if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
							if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
							if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							conductor->bof[bofdec]=1;
									
							fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);

							miss_num++;
							conductor->tag=tagdec;
							total_kikloi=total_kikloi+kikloi;
							taken=1;
							conductor=root;
							if(conductor!=0){
								while(conductor->next!=0){
									if(conductor->index==indexdec){
										conductor->metritis_fifo++;
										if(conductor->metritis_fifo==way2b){
											conductor->metritis_fifo=0;
										}
									}//ifindex
									conductor=conductor->next;
								}//whilecond!=0
								if(conductor->index==indexdec){
									conductor->metritis_fifo++;
								}
								if(conductor->metritis_fifo==way2b){
									conductor->metritis_fifo=0;
								}
								break;
							}//ifcond!=0
						 }//ifvoithitiki
						 voithitiki++;
					 }//ifdiplo
					 conductor=conductor->next;
				 }//whilecond
			 }//ifconductor

		 }//telosfifooo

		 if((epilogi2==3)&&(taken==0)){//LRU!!!!!!!!!!!!!!!!!!!
			 for(metritis_fully=0;metritis_fully<=clock;metritis_fully++){
				 conductor=root;
				 if(conductor!=0){
					 while(conductor->next!=0){
						 if((taken==0)&&(conductor->index==indexdec)&&(conductor->touch==metritis_fully)){
							  if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
							  if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
							  if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							  if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							  elegxos_victim=victimroot;
							vtaken=0;
							while(elegxos_victim!=0){
								if ((elegxos_victim->tag==tagdec)&&(elegxos_victim->index==indexdec)&&(elegxos_victim->valid==1)) { 
									kikloi=3;
									victimhits++;
									vtaken=1;
								}
								elegxos_victim=elegxos_victim->next;
							}//while
							victimcounter++;
							
							if (vtaken==0)
								victimmisses++;
							

							victim_conductor->index=indexdec;
							victim_conductor->tag=tagdec;
							victim_conductor->valid=1;



							if(victim_conductor->next!=0)
							{
								victim_conductor=victim_conductor->next;
							}
							else
							{
								victim_conductor=victimroot;
								while(victim_conductor!=0)
								{
									victim_conductor=victim_conductor->next;
								}
								victim_conductor=victimroot;

							}
							conductor->valid=1;
							conductor->tag=tagdec;
							conductor->bof[bofdec]=1;
							  conductor->valid=1;
							  for(j=0;j<100;j++){
								  conductor->bof[j]=0;
							  }
							  conductor->touch=clock;
							  
							  fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);

							  miss_num++;
							  conductor->tag=tagdec;
							  total_kikloi=total_kikloi+kikloi;
							  conductor->touch=clock;
							  taken=1;
							  
						 }//iftriploooooo
						 conductor=conductor->next;
					 }//whilecond
				 }//ifcond
				 if((taken==0)&&(conductor->index==indexdec)&&(conductor->touch==metritis_fully)){
					          if ((wallocate2==1)&&(nwallocate2==0)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2+wcache2;
														}
							  if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==0)&&(wthrough2==1)){
															kikloi = wcache2+wram2;
														}
							  if ((wallocate2==0)&&(nwallocate2==1)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							  if((wallocate2==1)&&(nwallocate2==0)&&(wback2==1)&&(wthrough2==0)){
															kikloi = wcache2+wram2+wcache2;
														}
							  conductor->valid=1;
							  conductor->touch=clock;
							  for(j=0;j<100;j++){
								  conductor->bof[j]=0;
							  }
							  conductor->bof[bofdec]=1;
							  fprintf(output_file_4,"\t     MISS\t   CAPACITY\t      %d\t%d\n",kikloi,conductor->tag);
							  miss_num++;
							  conductor->touch=clock;
							  conductor->tag=tagdec;
							  total_kikloi=total_kikloi+kikloi;


				 }//iftriploooooo
			 }//for
        }//LRU

		        actionw=0;
	            actionr=0;
	            actionm=0;
	            actionf=0;
					  }    //if lines 
								                                                                                                             
                }  //while
         if(lastflash==1){
			 conductor = root;
								  if ( conductor!= 0 ) 
									{ // Makes sure there is a place to start 
										while ( conductor->next != 0 ) 
												{
													conductor->tag=0;
													conductor->valid=0;
													for (k=0;k<50;k++)
														{
															conductor->bof[k]=0;
														}
													conductor=conductor->next;
												}
									}
			 fprintf(output_file_4," FLUSH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		 }
	 conductor=root;
	hitrate=hits_num/(result2 - flash_counter)*100;
	missrate=miss_num/(result2- flash_counter)*100;
	printf("Victim Hits: %d\n", victimhits);
	printf("Hit Rate is: %4.2f\n",hitrate);
	printf("Miss Rate is: %4.2f\n",missrate);
	printf("Total Number of Cycles are: %d\n",total_kikloi);
   while(conductor->next!=0)
	{
		tmp=conductor;
		conductor=conductor->next;
		free(tmp);
	}
   Cache2=Cache2+bima;
  
   }//answer3
  
                  
 
   fclose(input_file);
   fclose(output_file_2);
   fclose(output_file_3);
   fclose(output_file_4);
   printf("Press Enter To Exit...");
    getchar();
	
 

   return(0);
}
