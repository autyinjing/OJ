void replaceSpace(char *str,int length) {
        int count = 0; 	//空格数
        int new_length; //新的串长
        
        //统计空格数
        for (int i = 0; i < length; ++i) {
            if (str[i] == ' ')
                ++count;
        }
        
        new_length = length + count * 2;
        //从尾巴向前替换
        for (int i = length - 1, j = new_length - 1; i >= 0; --i) {
            if (str[i] == ' ') {
                str[j--] = '0';
                str[j--] = '2';
                str[j--] = '%';
            } else {
                str[j--] = str[i];
            }
        }
        str[new_length] = '\0';
}
