#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,x1,y1,x2,y2,a,b;
    char dir[100];
    bool indicator;
    scanf("%d",&j);

    for(i=0;i<j;i++){
        indicator = true;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%s",dir);
        for(a=0;a<strlen(dir);a++){
            if(a%2==0){
            if(dir[a]=='R'){
                if(x1+1>=0 && x1+1<=7){
                    x1++;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='U'){
                if(y1+1>=0 && y1+1<=7){
                    y1++;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='L'){
                if(x1-1>=0 && x1-1<=7){
                    x1--;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='D'){
                if(y1-1>=0 && y1-1<=7){
                    y1--;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            }
            else{
                if(dir[a]=='R'){
                if(x2+1>=0 && x2+1<=7){
                    x2++;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='U'){
                if(y2+1>=0 && y2+1<=7){
                    y2++;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='L'){
                if(x2-1>=0 && x2-1<=7){
                    x2--;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            else if(dir[a]=='D'){
                if(y2-1>=0 && y2-1<=7){
                    y2--;
                }
                if(x1==x2 && y1==y2){indicator=false;break;}
            }
            }

        }
        if(indicator==false){printf("Case %d: COLLISION\n",i+1);}
            else{printf("Case %d: SAFE\n",i+1);}
    }

    return 0;
}
