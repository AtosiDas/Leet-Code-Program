Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var count = 0;
    var flag = false;
    for(var i = s.length - 1; i >= 0; i--){
        if(s[i] >= "a" && s[i] <= "z" || s[i] >= "A" && s[i] <= "Z"){
            flag =  true;
            count ++;
        }
        else{
            if(flag == true)
                return count;
        }
    }
    return count;
};
