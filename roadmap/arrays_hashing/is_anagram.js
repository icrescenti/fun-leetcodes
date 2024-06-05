class Solution {
    /**
     * Get all characters of a string as an array
    */
    parseToChain(_string) {
        let aux = [];
        for (let i = 0; i < _string.length; i++) {
            aux.push(_string[i]);
        }
        return aux;
    }

    compareChains(chain_1, chain_2) {
        //Compare length of both strings
        if (chain_1.length == chain_2.length) {
            let i = 0;
            let different = false;
            
            //check they have the same letters in the same order
            while (!different && i < chain_1.length) {
                if (chain_1[i] != chain_2[i]) {
                    different = true;
                }
                i++;
            }

            return !different;
        }
        else {
            return false;
        }
    }

    /**
        * @param {string} s
        * @param {string} t
        * @return {boolean}
    */
    isAnagram(s, t) {
        const first_string = this.parseToChain(s).sort();
        const second_string = this.parseToChain(t).sort();

        if (s.length == t.length) {
            return this.compareChains(first_string, second_string);
        }
        else {
            return false;
        }
    }
}