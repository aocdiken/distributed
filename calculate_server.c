#include "calculate.h"
 
float * add_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1+argp->num2;
 printf("Got Request : Adding %f and %f\n",argp->num1,argp->num2);
 printf("Sent Response : %f\n",result);
 
 return &result;
}
 
float * sub_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1-argp->num2;
 printf("Got Request : substituting %f from %f\n",argp->num2,argp->num1);
 printf("Sent Response : %f\n",result);
 
 return &result;
}
 
float * mul_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1*argp->num2;
 printf("Got Request : Multiplying %f by %f\n",argp->num1,argp->num2);
 printf("Sent Response : %f\n",result);
 
 return &result;
}
 
float * div_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1/argp->num2;
 printf("Got Request : Dividing %f by %f\n",argp->num1,argp->num2);
 printf("Sent Response : %f\n",result);
 
 return &result;
}
