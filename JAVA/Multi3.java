class Multi3
{
    public static void main(String Arg[])
    {
        Thread t = Thread.currentThread();
        System.out.println("Name of Current thread is "+t.getName());
        System.out.println("Priority of the thread is "+t.getpriority());
    }
}