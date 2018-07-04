 #include <iostream>
 #include <cstdio>
 using namespace std;
 int arr[1004][1004]={0,};
 int main(){
 	int a,b,c;
	int istart,iend,jstart,jend,i,j,count=1,t;
 	cin>>a>>b>>c;
 	istart=1;
 	iend=a;
 	jstart=1;
 	jend=b;
 	i=1;
 	j=1;
    t=a*b;
    if(c>a*b){
        cout<<0;
        return 0;
    }
    if(c==1)
        printf("1 1");
 	while(count<t){
        //  cout<<"c "<<count<<"\n";
	 	if(i==istart  && j<jend){
	 		//arr[i][j]=count;
	 		// printf("%d %d\n",i,j);
	 		count++;
			j++;
			
		}
		else if(j==jend && i<iend){
			//arr[i][j]=count;
			// printf("%d %d\n",i,j);
			if(count==c){
			    printf("%d %d",i,j);
			    return 0;
			}
			count++;
			i++;
		}
		else if(i==iend  && j>jstart){
			//arr[i][j]=count;
			// printf("%d %d\n",i,j);
			if(count==c){
			    printf("%d %d",i,j);
			    return 0;
			}
			j--;
			count++;
		}
		else if(j==jstart  && i>istart){
			//arr[i][j]=count;
			// printf("%d %d\n",i,j);
			if(count==c){
			    printf("%d %d",i,j);
			    return 0;
			}
			i--;
			count++;
		}
		if(i==j+1 && j==jstart){
            //cout<<"idx"<<"\n";
            // printf("%d %d",i,j);
			istart++;
			jstart++;
			iend--;
			jend--;
            

			
		}
        if(count==c){
			    printf("%d %d",i,j);
			    return 0;
			}
      
}
}
