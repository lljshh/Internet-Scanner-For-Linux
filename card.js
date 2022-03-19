class Card {
    /**
     * @param {number} type
     * @param {number} num
     * @param {HTMLDivElement} Web Web类型
     */
    constructor(type, num) {
        this.type = type;
        this.num = num;
    }
    show(Web) {
        Web.innerHTML = "<img src=\"svg/" + this.type.toString() + "/" + this.num.toString() + ".svg\", width=\"395\", height=\"500\">";
    }
}