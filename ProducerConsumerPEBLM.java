class Company {
    int n;
    static boolean f = false;
    // f = false -> chance of producer
    // f = true  -> chance of consumer 
    synchronized public static void produceProduct(int n)throws Exception{
        if(f){
            wait();
        }
        this.n = n ;
        System.out.println("Product Produced :" +n);
        f = true ;
        notify();

    }
    synchronized public static int consumeProduct(){
        if(!f){
            wait();
        }
        System.out.println("Product Consumed :"+n);
        return  this.n ;

    }
}
class Producer extends Thread{
    Company c ;
    public Producer(Company c){
        this.c = c ;
    }
    public void run(){
        int  i = 1 ;
        while(true){
            this.c.produceProduct(i);
            try{
                
            }
            i++;
        }
    }
}
class Consumer extends Thread{
    Company c ;
    Consumer(Company c){
        this.c = c ;
    }
    public void run(){
        while(true){
            this.c.consumeProduct();
            try{
                Thread.sleep(1000);
            }catch(Exception e){
            }
        }
    }
}
public class ProducerConsumerPEBLM {
    public static void main(String[] args) {
        Company  c = new Company();

    }
}
