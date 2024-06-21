#json used to change binary-file to character LANG in Communicate

import json

python_dict = {"hi":"join", "age":30,"city":"new"}

json_string ={

	"지브리OST리스트 " : 
		[
			{
			"name": " 마녀 배달부 키키",
			"song": "따스함에 둘러쌓인다면"
			},
			{
			"name" : " 하울의 움직이는 성",
			"song" : " 세계의약속"
			}
		]
}

json_py_dic=json.dumps(python_dict,indent=4)

print("python 딕셔너리: ", python_dict)
print("JSON 문자열: ", json_py_dic)
print("JSON 문자열키키: ", json_string)
print("JSON 문자열키키: ", json_string.지브리OST리스트[0])
print("JSON 문자열키키: ", json_string.지브리OST리스트[0].name)
	
