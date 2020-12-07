#include <linux/init.h>  
#include <linux/module.h>  
   

static int hello_init(void)  
{  
  printk(KERN_ALERT "%s:%d Hello world\n", __FUNCTION__, __LINE__);
  return 0;  
}  
static void hello_exit(void)  
{  
  printk(KERN_ALERT "%s:%d Goodbye, hello world\n", __FUNCTION__, __LINE__);  
}  
   
module_init(hello_init);  
module_exit(hello_exit);
MODULE_AUTHOR("wenminchen@126.com");
MODULE_DESCRIPTION("01_helloworld");
MODULE_LICENSE("GPL");
