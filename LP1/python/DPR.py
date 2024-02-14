class DPR:
    __ID = -1
    __name = ""
    __partai = ""
    __bidang = ""

    # Python only use 1 constructor
    def __init__(self, id, name="", bidang="", partai=""):
        self.__ID = id
        self.__name = name
        self.__bidang = bidang
        self.__partai = partai

    # Getter Setter

    # ID
    def getID(self):
        return self.__ID

    def setID(self, ID):
        self.__ID = ID

    # NAME
    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    # Bidang
    def getBidang(self):
        return self.__bidang

    def setBidang(self, bidang):
        self.__bidang = bidang

    # Partai
    def getPartai(self):
        return self.__partai

    def setPartai(self, partai):
        self.__partai = partai
