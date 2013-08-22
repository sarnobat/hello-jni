public class HelloWorld
{
    public native void print();

    static {
	System.out.println("Helloworld.java::static - Loading shared library 'helloworld'");
        System.loadLibrary("helloWoRLd"); // not case sensitive
    }

    public static void main(String[] args) {
	System.out.println("HelloWorld.java :: main() :: Begin");
	HelloWorld hw = new HelloWorld();
	System.out.println("Helloworld.java :: main() :: About to call native print() method");
	System.out.println();
	hw.print();
    }
}
