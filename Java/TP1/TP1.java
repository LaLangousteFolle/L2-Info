class TP1 {
  public static void main(String[] args) {
    // ex3();
  }

  public void ex3(String[] arguments) {
    int day = Integer.valueOf(arguments[0]);
    int month = Integer.valueOf(arguments[1]);
    int year = Integer.valueOf(arguments[2]);
    int bisextile = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      bisextile = 1;
    if ()
    {
      day++;
      System.out.println("jour: "+day +"mois: "+month+"year: "+ year);
    }
  }
}
