public class a051501{
	public static void printIsGreatThan10(int n){
		if(n>10){
			System.out.printf("%d是大于10的%n",n);//%n为换行
		}
	}
	//switch 支持 string 类型
	public static void printColor(String color){
		switch(color){
			case "red":
			System.out.println("红色");
			break;
			case "yello":
			System.out.println("黄色");
			break;
			default:
			System.out.println("不知道什么");
			break;
		}
	}
	public static void foreach(int[] array){
		for(int item : array){
			System.out.println(item);
		}
	}
	public static void displayMutipyCation(){
		for(int i = 1;i <= 9;i ++)
		{
			for(int j = 1;j <= i;j ++){
				System.out.printf("%d * %d = %d ",j,i,i*j);
			}
			System.out.println();
		}
	}
	public static void find(){
		int[] array={1,2,3,4,5,6,7};
		for(int i=0;i < array.length;i ++){
			if(array[i] == 3){
				break;
			}
		}
		int[][] twoArray={
			{1,2,3},
			{4,5,6},
			{7,8,9},
		};
		found:
		for(int i = 0;i<3;i ++){
			for(int j = 0;j<3;j ++){
				if(twoArray[i][j] == 5){
					break found;
					//continue found
				}
			}
		}
	}
	int sum(int a,int b){
		return 0;
	}
    int sum(int a,int b,int c){
		return 0;
	}	
	void sum(int a,int b){//报错了
		
	}
	public static void main(String[] args){
		//printIsGreatThan10(100);
		//printIsGreatThan10(9);
		//printColor(args[0]);
		//foreach(new int[]{1,3,6,7});
		//displayMutipyCation();
		//find();
		
	}
}
