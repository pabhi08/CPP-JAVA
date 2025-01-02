 abstract class RBI
{
 public abstract float CalculateROI();
//virtual float CalculateROI()=0;   (c++)


 public void DisplayRules()
 {
    System.out.println("You have to submit Adhar Card and PAN card");
    System.out.println("Your minimum balance is 10,000");
 }
}

class SBI extends RBI
{
public float CalculateROI()
{
    return 5.7f;
}

}

class BOM extends RBI
{

public float CalculateROI()
{
    return 7.7f;
}
}

class AbstractDemo
{
    public static void main(String Arg[])
    {
     //    RBI robj=new RBI();   //Error (Abstract class)
        
        SBI sobj=new SBI();
        BOM bobj=new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet=0.0f;
        fRet=sobj.CalculateROI();
        System.out.println("ROI of SBI is :"+fRet);
 
        fRet=bobj.CalculateROI();
        System.out.println("ROI of BOM is :"+fRet);

    }
}