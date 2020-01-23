       /*
	Please Visit First: 
	http://netpbm.sourceforge.net/doc/pgm.html for more about .pgm image
	https://www.geeksforgeeks.org/c-program-to-write-an-image-in-pgm-format/  for "How to create a .pgm image with C & also about .pgm file
	*/

 #include <stdio.h> 
 int main(){ 
	int i, j;
	char MAGIC_NUM[10], GRAY_VAL[10];
	int height, width;

	FILE *brur; //Pointing the file with FILE pointer
	
	
	    brur = fopen("brur.pgm", "r"); //Opening file (you can change the file name brur.pgm to n.pgm because you have the n.pgm file in the same directory)
	    fscanf(brur, "%s", MAGIC_NUM); //scaning magic number {file type} 
		fscanf(brur, "%d %d", &width, &height); //scaning width & height {image size}
		fscanf(brur, "%s", GRAY_VAL); //scaning maximum gray value {color}

        int arr1[height][width];

      //scaning height & width value from the image
      for(i = 0; i < height; i++){
    	  for (j = 0; j < width; j++){
    	       fscanf(brur, "%d", &arr1[i][j]);		
    	}
     }
    
        printf("%s\n", MAGIC_NUM);
        printf("%d %d\n", width, height);
        printf("%s\n", GRAY_VAL);

      //printing the image with 2D Array
      for(i = 0; i < height; i++){
    	  for (j = 0; j < width; j++){
    		   printf("%d ", arr1[i][j]);
    		   if(j == width-1 ){
               printf("\n");
          }  		
    	}
     }
	fclose(brur); 
} 
