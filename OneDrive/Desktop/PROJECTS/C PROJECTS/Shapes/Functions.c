void getShape(int *row, int *col){
  char shape;
  printf("Choose your shape");
  printf("\n[1] Square\n[2] Rectangle\n[3] Triangle\n[4] Circle\n");
  printf("What shape would you like?: ");
  scanf("%c", &shape);

  switch(shape)
  {
    case '1':
      makeSquare(*row);
      break;
    case '2':
      makeRectangle(*row, *col);
      break;
    case '3':
      makeTriangle(*row);
      break;
    case '4':
      makeCircle(*row);
      break;
    default:
      printf("Invalid choice!");
      break;
  }
}

void makeSquare(int n){
  int valid;
  printf("Enter the size of your square: ");
  valid  = scanf("%d", &n);
  if(!valid){
    printf("Invalid input!");
  } 
  else if(n <= 0){
    printf("Number should be greater than 0!");
  }
  else{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++){
        printf("* "); 
      }
      printf("\n");
    }
  }
}

void makeRectangle(int row, int col){
  int validRow;
  int validCol;
  printf("Enter the row size of your rectangle: ");
  validRow = scanf("%d", &row);
  if(validRow){
    printf("Enter the col size of your rectangle: ");
    validCol = scanf("%d", &col);
  }
  if(!validRow || !validCol){
    printf("Invalid input!");
  } 
  else if(row <= 0 || col <= 0){
    printf("Number should be greater than 0!");
  }
  else{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
      for(int j = 0; j < col; j++){
        printf("* "); 
      }
      printf("\n");
    }
  }
}

void makeTriangle(int n){
  int valid;
  printf("Enter the size of your triangle: ");
  valid  = scanf("%d", &n);
  if(!valid){
    printf("Invalid input!");
  } 
  else if(n <= 0){
    printf("Number should be greater than 0!");
  }
  else{
    printf("\n");
    int k;
    for (int i = 0; i < n; i++, k = 0)
    {
      for(int j = 0; j < n - i; j++){
        printf("  ");
      }
      while (k - 1 != 2 * i) {
         printf("* ");
         ++k;
      }
      printf("\n");
    }
  }
}

void makeCircle(int n){
  
}