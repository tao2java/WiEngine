/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
package com.wiyun.engine.filters;

/**
 * \if English
 * Combine many color filters together and perform them one by one. Output
 * of previous filter is the input of next.
 * \else
 * 将多个过滤器组合成一个, 先后执行它们, 后一个过滤器以前一个过滤器的输出为输入.
 * 过滤器越多, 速度可能越慢, 因此要谨慎使用.
 * \endif
 */
public class CombineColorFilter extends ColorFilter {
    /**
     * 从底层指针获得一个CombineColorFilter的Java对象
     * 
     * @param pointer 底层指针
     * @return {@link CombineColorFilter}
     */
    public static CombineColorFilter from(int pointer) {
    	return pointer == 0 ? null : new CombineColorFilter(pointer);
    }
    
	/**
	 * \if English
	 * Static constructor
	 *
	 * @param filter1 first filter, more filters can follow filter1
	 * @param filters more filters
	 * \else
	 * 静态构造函数
	 *
	 * @param filter1 第一个过滤器, 如果有更多过滤器可以跟在后面
	 * @param filters 更多过滤器
	 * \endif
	 */
    public static CombineColorFilter make(ColorFilter filter1, ColorFilter... filters) {
    	return new CombineColorFilter(filter1, filters);
    }
    
    protected CombineColorFilter() {
    }
    
    protected CombineColorFilter(ColorFilter filter1, ColorFilter[] filters) {
    	nativeInit(filter1, filters);
    }
    
    private native void nativeInit(ColorFilter filter1, ColorFilter[] filters);

	protected CombineColorFilter(int pointer) {
    	super(pointer);
    }

	/**
	 * \if English
	 * Add a filter to last
	 *
	 * @param filter color filter to be added
	 * \else
	 * 添加一个过滤器到最后
	 *
	 * @param filter 过滤器
	 * \endif
	 */
	public native void addFilter(ColorFilter filter);
}
