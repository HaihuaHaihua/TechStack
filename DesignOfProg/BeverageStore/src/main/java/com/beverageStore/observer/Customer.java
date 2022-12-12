package main.java.com.beverageStore.observer;

public interface Customer {
	/**
	 * ע��һ���۲���
	 * 
	 * @param user
	 */
	public void registerObserver(Observer observer);
 
	/**
	 * �Ƴ�һ���۲���
	 * 
	 * @param observer
	 */
	public void removeObserver(Observer observer);
 
	/**
	 * ֪ͨ���еĹ۲���
	 */
	public void notifyObservers();
}
