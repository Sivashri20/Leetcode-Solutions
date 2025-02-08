char * mergeAlternately(char * word1, char * word2){
    int size1=strlen(word1),size2=strlen(word2);
    int size=size1+size2,j=0,k=0,i=0;
    char* result=(char*)malloc((size+1)*sizeof(char));
    
    while(i<size)
    {
        if(j<size1)
        result[i++]=word1[j++];
        if(k<size2)
        result[i++]=word2[k++];
        
        
    }
    result[i]='\0';
    return result;
}
