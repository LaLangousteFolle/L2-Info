public class Ex2 {
  public static void main(String[] args) {
    int a = Integer.valueOf(args[0]);
    int b = Integer.valueOf(args[1]);
    int c = Integer.valueOf(args[2]);

    int delta = b * b - 4 * a * c;
    if (delta < 0) {
      System.out.println("Pas de racines reelles");
    }
    if (delta == 0) {
      double root = Math.sqrt(-b / (2 * a));
      System.out.println(root);
    }
    if (delta > 0) {
      double root1 = (-b - Math.sqrt(delta)) / (2 * a);
      double root2 = (-b + Math.sqrt(delta)) / (2 * a);
      System.out.println(root1);
      System.err.println(root2);
    }
  }
}
