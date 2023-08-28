Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order
of characters. No two characters may map to the same character, but a character may map to itself.

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    let size = 256;
    if(s.length !== t.length){
        return false;
    }
    let marked = new Array(size);
    for(let i = 0;i < size; i++){
        marked[i] = false;
    }
    let map = new Array(size);
    for(let i = 0;i < size; i++){
        map[i] = -1;
    }
    for(var i = 0; i < t.length ; i++){
        if(map[s[i].charCodeAt()] === -1){
            if(marked[t[i].charCodeAt()] === true)
                return false;
            marked[t[i].charCodeAt()] = true;
            map[s[i].charCodeAt()] = t[i].charCodeAt();
        }
        else if(map[s[i].charCodeAt()] !== t[i].charCodeAt())
            return false;
    }
    return true;
};
