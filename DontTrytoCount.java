import java.util.Scanner;

public class DontTrytoCount {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int t=s.nextInt();
        for(int i=0;i<t;i++)
        {
            int a,b;
            String s1,s2;
            a=s.nextInt();
            b=s.nextInt();
            s1=s.next();
            s2=s.next();
            int ans=0,x=0;
            for(int j=0;j<6;j++)
            {
                if(s1.contains(s2))
                {
                    x++;
                    break;
                }
                else{
                    ans++;
                s1=s1+s1;
            }
                
            }
            if(x>0)
            System.out.println(ans);
            else
            System.out.println("-1");
            
        }
    }
}
