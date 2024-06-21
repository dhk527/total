"""
uvm 싱글톤 패턴, 클래스에 인스턴스가 단 하나만 있도록 하면서 
이 인스턴스에 대한 전역 접근(액세스) 지점을 제공하는 생성 디자인 패턴이다.

문제 1. 클래스에 인스턴스가 단 하나만 있도록 하려면?
문제 2. 해당 인스턴스에 대한 전역 접근 지점을 제공해려면?
해결 1. 다른 객체들이 싱글턴 클래스와 함꼐 new 연산자를 사용하지 못하도록 디폴트 생성자를 비공개로 설정 (create)
해결 2. 생성자 역할을 하는 정적 생성 메서드를 만들라. 내부적으로 이 메서드는 객체를 만들기 위하여 비공개 생성자를 호출한 후
		객체를 정적 필드에 저장한다. 이 메서드에 대한 그 다음 호출들은 모두 캐시된 객체를 반환 (static)

장점 1. 클래스가 단 하나의 인스터만을 갖는다.
장점 2. 이 인스턴스에 대한 전역 접근 지점을 얻을 수 있음.
장점 3. 싱글턴 객체는 처음 요청될 때만 초기화.

단점 1. 

국가의 정부가 딱 싱글턴 패턴의 예시, 국가는 단 하나의 정부만을 가짐 class(국가) 라면 정부는 단 하나의 (instance) 
'X'의 정부라는 명칭은 정부를 구성하는 개인들의 신원과 관계없이 정부 책임자들의 그룹을 식별하는 글로벌 접근 지점.

singleton이라는 class에
instance : Singleton
-singleton()이라는 private에
+getinstance():Singleton이라는 public
if(instance == null)
{
	instacne = new Singleton() // new를 통한 직접 호출들을 방지하기 위해 항상 비공개해야함.
}
return instance

getinstance는 정적 메서드임 static 써야댐
new 연산자는 직접 생성 호출들을 방지하기 위해 비공개로 해야한다
즉 create를 쓴다. 특별 생성 메서드를 사용하기 때문에 다른 모든 수단들은 비활성화 해야한다. 
또한 전역 변수들을 더 엄격하게 제어해야할때 사용 된다. 전역 변수들은 인스턴스가 하나이기에
1
싱글턴 패턴을 왜 쓸까?
여러 컴포넌트 간에 리소스를 공유하고 관리해야 하는데 객체는 단 하나만 존재하므로 중앙 집중적인 제어 및 공유가 가능
또한 싱글턴 패턴을 사용하면이러한 설정 및 환경 변수를 담당하는 객체를 중앙에서 제어하고 수정이 가능
전역적인 접근성으로 싱글턴 패턴은 어디서든 접근 가능한 전역적인 객체를 제공해준다.
또한 컴포넌트가 여러 개 있으나 일관성을 유지할 수 있게 특정 객체에 대한 일관된 접근으로 "순서"있게 할 수 있기 때문이다.

요약하자면 단 하나의 객체를 통한 테스트를 진행하기에 객체에 대한 환경 설정을 용이하게 할 수 있기 때문에 쓴다.
"""

"""
testcase가 많은 곳에서 중앙에서 효과적으로 관리하고자 할 때 singleton 패턴이 유용함.
1. 테스트 환경의 일관성 유지
2. 테스트 케이스 간 데이터 공유
3. 중앙 집중적인 테스트 제어
4. 테스트 스크립트의 간소화

"""
"""
1. 싱글턴 인스턴스의 저장을 위해 클래스에 비공개 정적 필드를 추가
2. 싱글턴 인스턴스를 가져오기 위한 공개된 정적 생성 메서드를 선언
3. 정적 메서드 내에서 '지연된 초기화'를 구현, 첫 번째 호출에서 새 객체를 만든 후 그 객체를 정적 필드에 넣을 것
 이 메서드는 모든 후속 호출들에서 항상 해당 인스턴스를 반환해야함.
4. 클래스의 생성자를 비공개로 만든다. 그러면 클래스의 정적 메서드는 여전히 생성자를 호출할 수 있지만 다른 객체들은 호출할 수 없다.
5. 클라이언트 코드를 사펴보며 싱글턴의 생성자에 대한 모든 직접 호출들을 싱글턴의 정적 생성 메서드에 대한 호출로 바꾼다.
"""











































