// int Solution::isPower(int A)
// {
//     if(A==1) return true;
//     for(int i=2;i*i<=A;i++)
//     {
//         int y=2;
//         int power=pow(i,y);
//         while(power<=A and power>0)
//         {
//             if(power==A) return true;
//             y++;
//             power=pow(i,y);
//         }
//     }
//     return false;
    
// }// Brute force Approach

// int Solution::isPower(int A)
// {
//     if(A==1) return true;
//     for(int i=2;i*i<=A;i++)
//     {
//         float logr= log(A)/log(i);
//         if(ceil(logr)==floor(logr)) return true;
//     }
//     return false;
// }

int Solution::isPower(int A)
{
    if(A==1) return true;
    for(int i=2;i*i<=A;i++)
    {
        int logr= log(A)/log(i);
        if(pow(i,logr)==A) return true;
    }
    return false;
}


