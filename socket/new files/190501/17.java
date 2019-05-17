public class a051701{
	/* public static void pra_switch(String color){
		switch(color){
			case "red":{
			System.out.printf("红色");
			break;
			}
			case "green":{
			System.out.printf("绿色");
			break;
			}
			default:{
				System.out.printf("不知道什么颜色");
			}
		}
	}
	public static void mut(){
		for(int i = 1;i <= 9;i ++){
			for(int j = 1;j <= i;j ++){
				System.out.printf("%d * %d = %d",j,i,i*j);
			}
			System.out.println("\t");
		}
	} */
 public static void myPrint(int x){
	 if(x == 2){
		 return ;
	 }else{
		 System.out.println(x);
	 }
 }
 public static int prc_d(int n){
	 if(n == 1){
		 return 1;
	 }else{
		 return n+prc_d(n - 1);
	 }
 }
 public static void pr(){
	 for(int i =1;i <= 9;i ++){
		 for(int j = 1;j <= i;j ++){
			 System.out.printf("%d * %d = %d",j,i,i*j);
		 }
		 System.out.println();
	 }
 } 
public static int pr_J(int n){
	if(n == 1){
		return 1;
	}else{
		return pr_J(n - 1) * n;
}
}
	public static void main(String[] args){
		//System.out.println("haha");
		//pra_switch(args[0]);
		 //mut();
		 /* myPrint(1);
         myPrint(2);
         myPrint(3);
         myPrint(4); */
		 //System.out.println(prc_d(3));
		  //pr();
		  System.out.println(pr_J(3));
}
}
