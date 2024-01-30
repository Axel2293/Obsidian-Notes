CSS stands for Cascading Style Sheets
It us a language that describes how HTML elements are displayed
Adds style to web documents
- Colors
- Fonts
- Background images
- Layout
![[Pasted image 20240125111426.png]]
## Inline CSS
Used to apply a unique style to a single HTML element
Add style attribute to the desired element
![[Pasted image 20240129192618.png|300]]
- Only affects the element it is applied to
- It is not reusable
- It is not easy to maintain
- Not posible to use pseudo-classes
	- Style elements when a user mouses over them
		- :hover, :active, :focus, etc.
## Internal CSS


## External CSS


# Selectors
- Universal selector: Selects all elements
- Element or tag Selector: Selects all HTML elements of the specified type
![[Pasted image 20240125111904.png]]
- By identifier: Selects the element with the specified ID (can only be one element)
![[Pasted image 20240125111917.png]]
- by Class: Selects all elements with the specified Class
![[Pasted image 20240125111926.png]]

## Text properties
![[Pasted image 20240125115103.png]]

## Attribute selectors
- By attribute: Selects all elements with the specified attribute or with a value assigned to an attribute.
![[Pasted image 20240125115852.png]]
1. - `[attr]` the element has the attribute. **`[checked] { … }`**.
2. - `[attr=val]` attribute with the specified value. **`[name="chk"] { … }`**.
3. - `[attr~=val]` attribute with a value that contains a specified word in a space-separated list of words. **`[value~="val2"] { … }`**. 
4. `[attr^=val]` attribute with a value that begins with a specified value. **`[type^="check"] { … }`**.
5. `[attr$=val]` attribute with a value that ends with a specified value. **`[value$="2"] { … }`**.
6. `[attr*=val]` attribute with a value in any position **`[value*="2"] { … }`**.
## Pseudo classes
- **E:hover**: Selects an element E when you mouse over it.
- **E:first-child** / **:last-child** : Selects the first/last element of its parent. When we have nested tags, if we want the first child inside the parent, use child.
- **E:nth-child(n)** : Selects the nth element of its parent. (eg. the paragraph that is the third child)
- **E:nth-last-child(n)**: Selects the nth element of its parent, counting from the last element.
- **E:nth-of-type(n)**: Selects the nth element of its parent of the same type (eg. the third paragraph).
- **E:nth-last-of-type(n)**: Selects the nth element of its parent, counting from the last element.
- **E:not(s)**: Selects element E that do not match the selector s.
- **E:checked**: Selects an element that has the property checked, like a radio button or checkbox.